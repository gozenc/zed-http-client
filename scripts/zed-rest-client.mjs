#!/usr/bin/env node

import { spawnSync } from "node:child_process";
import crypto from "node:crypto";
import fs from "node:fs";
import os from "node:os";
import path from "node:path";

const METHODS = new Set([
  "CONNECT",
  "DELETE",
  "GET",
  "GRAPHQL",
  "HEAD",
  "LIST",
  "OPTIONS",
  "PATCH",
  "POST",
  "PUT",
  "TRACE",
  "WEBSOCKET",
]);

const TEXT_CONTENT_TYPES = [
  "application/graphql",
  "application/javascript",
  "application/json",
  "application/problem+json",
  "application/soap+xml",
  "application/x-www-form-urlencoded",
  "application/xml",
  "text/",
];

const stateDir = path.join(os.homedir(), ".zed-rest-client");
const cookieJar = path.join(stateDir, "cookies.txt");
const historyPath = path.join(stateDir, "history.jsonl");

main();

function main() {
  const { command, options } = parseArgs(process.argv.slice(2));
  if (!command || options.help) {
    printHelp();
    return;
  }

  if (!options.file) {
    throwUserError("--file is required");
  }

  const filePath = path.resolve(options.file);
  const content = fs.readFileSync(filePath, "utf8");
  const cwd = options.cwd ? path.resolve(options.cwd) : path.dirname(filePath);
  const block = options.selectedText?.trim()
    ? { text: options.selectedText, startLine: 1, endLine: countLines(options.selectedText) }
    : findRequestBlock(content, Number(options.line || 1));

  const context = {
    cwd,
    filePath,
    dotenvVariables: loadNearestDotenv(path.dirname(filePath)),
    fileVariables: collectFileVariables(content),
    envVariables: loadEnvironmentVariables(cwd, path.dirname(filePath)),
  };
  const request = parseRequestBlock(block.text, context);

  if (command === "curl") {
    console.log(toCurlCommand(request));
    return;
  }

  if (command === "send") {
    if (options.dryRun) {
      console.log(toCurlCommand(request));
      return;
    }
    runCurl(request, { block, filePath });
    return;
  }

  throwUserError(`Unknown command: ${command}`);
}

function parseArgs(args) {
  const options = {};
  const command = args.shift();

  for (let i = 0; i < args.length; i += 1) {
    const arg = args[i];
    if (arg === "--help" || arg === "-h") {
      options.help = true;
    } else if (arg === "--dry-run") {
      options.dryRun = true;
    } else if (arg === "--file") {
      options.file = args[++i];
    } else if (arg === "--line") {
      options.line = args[++i];
    } else if (arg === "--cwd") {
      options.cwd = args[++i];
    } else if (arg === "--selected-text") {
      options.selectedText = args[++i];
    } else {
      throwUserError(`Unknown option: ${arg}`);
    }
  }

  return { command, options };
}

function printHelp() {
  console.log(`http-client

Usage:
  zed-rest-client.mjs send --file request.http --line 10 [--cwd /repo]
  zed-rest-client.mjs curl --file request.http --line 10 [--cwd /repo]

The runner parses the request block containing --line. Blocks are separated by
lines beginning with ###. It executes requests through curl and prints the
response to stdout for Zed's task terminal.`);
}

function throwUserError(message) {
  console.error(`http-client: ${message}`);
  process.exit(1);
}

function countLines(value) {
  return value.split(/\r?\n/).length;
}

function findRequestBlock(content, rawLine) {
  const lines = content.split(/\r?\n/);
  const blocks = [];
  let start = 1;
  let current = [];

  for (let index = 0; index < lines.length; index += 1) {
    if (/^\s*###+/.test(lines[index])) {
      if (current.some((line) => line.trim())) {
        blocks.push({
          text: current.join("\n"),
          startLine: start,
          endLine: index,
        });
      }
      current = [];
      start = index + 2;
      continue;
    }
    current.push(lines[index]);
  }

  if (current.some((line) => line.trim())) {
    blocks.push({
      text: current.join("\n"),
      startLine: start,
      endLine: lines.length,
    });
  }

  const line = Number.isFinite(rawLine) && rawLine > 0 ? rawLine : 1;
  return (
    blocks.find((block) => line >= block.startLine && line <= block.endLine) ??
    blocks.find((block) => line + 1 >= block.startLine && line + 1 <= block.endLine) ??
    blocks[0] ??
    throwUserError("No request block found")
  );
}

function collectFileVariables(content) {
  const variables = {};
  for (const line of content.split(/\r?\n/)) {
    const parsed = tryParseVariableDeclaration(line);
    if (parsed) {
      variables[parsed[0]] = parsed[1];
    }
  }
  return variables;
}

function loadEnvironmentVariables(cwd, fileDir) {
  const envName = process.env.ZED_REST_ENV || process.env.REST_CLIENT_ENV || "";
  const candidates = [
    path.join(fileDir, ".zed-rest-client.env.json"),
    path.join(cwd, ".zed-rest-client.env.json"),
  ];
  const configPath = candidates.find((candidate) => fs.existsSync(candidate));
  if (!configPath) {
    return {};
  }

  const parsed = JSON.parse(fs.readFileSync(configPath, "utf8"));
  const shared = objectOrEmpty(parsed.$shared);
  const selected = envName ? objectOrEmpty(parsed[envName]) : {};
  return { ...shared, ...selected };
}

function loadNearestDotenv(startDir) {
  const dotenvPath = findNearestDotenv(startDir);
  if (!dotenvPath) {
    return {};
  }
  return parseDotenv(fs.readFileSync(dotenvPath, "utf8"));
}

function findNearestDotenv(startDir) {
  let dir = path.resolve(startDir);
  while (true) {
    const candidate = path.join(dir, ".env");
    if (fs.existsSync(candidate)) {
      return candidate;
    }
    const parent = path.dirname(dir);
    if (parent === dir) {
      return null;
    }
    dir = parent;
  }
}

function parseDotenv(content) {
  const variables = {};
  for (const line of content.split(/\r?\n/)) {
    const trimmed = line.trim();
    if (!trimmed || trimmed.startsWith("#")) {
      continue;
    }
    const match = trimmed.match(/^([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.*)$/);
    if (match) {
      variables[match[1]] = unquoteConfigValue(match[2].trim());
    }
  }
  return variables;
}

function unquoteConfigValue(value) {
  if (
    (value.startsWith("\"") && value.endsWith("\"")) ||
    (value.startsWith("'") && value.endsWith("'"))
  ) {
    return value.slice(1, -1);
  }
  return value;
}

function objectOrEmpty(value) {
  return value && typeof value === "object" && !Array.isArray(value) ? value : {};
}

function parseRequestBlock(text, context) {
  const normalized = stripTrailingBlankLines(text.replace(/\r\n/g, "\n"));
  const firstSignificant = firstSignificantLine(normalized);
  if (!firstSignificant) {
    throwUserError("Request block is empty");
  }

  if (/^curl\s/.test(firstSignificant.line.trim())) {
    return parseCurlBlock(normalized, context);
  }

  return parseHttpBlock(normalized, context);
}

function stripTrailingBlankLines(value) {
  return value.replace(/\n+$/g, "");
}

function firstSignificantLine(text) {
  const lines = text.split("\n");
  for (let index = 0; index < lines.length; index += 1) {
    const trimmed = lines[index].trim();
    if (!trimmed || isComment(trimmed) || isVariableDeclaration(trimmed)) {
      continue;
    }
    return { line: lines[index], index };
  }
  return null;
}

function parseHttpBlock(text, context) {
  const lines = text.split("\n");
  let index = 0;
  const blockVariables = {};

  while (index < lines.length) {
    const trimmed = lines[index].trim();
    if (!trimmed || isComment(trimmed)) {
      index += 1;
      continue;
    }
    if (isVariableDeclaration(trimmed)) {
      const [name, value] = parseVariableDeclaration(trimmed);
      blockVariables[name] = value;
      index += 1;
      continue;
    }
    break;
  }

  if (index >= lines.length) {
    throwUserError("No request line found");
  }

  const requestLine = resolveVariables(lines[index].trim(), context, blockVariables);
  index += 1;

  let { method, url } = parseRequestLine(requestLine);
  const queryLines = [];
  while (index < lines.length && /^\s*[?&]/.test(lines[index])) {
    queryLines.push(resolveVariables(lines[index].trim(), context, blockVariables));
    index += 1;
  }
  if (queryLines.length) {
    url += queryLines.join("");
  }

  const headers = [];
  while (index < lines.length) {
    const line = lines[index];
    const trimmed = line.trim();
    if (!trimmed) {
      index += 1;
      break;
    }
    if (isComment(trimmed)) {
      index += 1;
      continue;
    }
    const header = parseHeader(resolveVariables(line, context, blockVariables));
    if (header) {
      headers.push(header);
    }
    index += 1;
  }

  const rawBody = lines.slice(index).join("\n");
  const body = resolveBody(rawBody, context, blockVariables);
  return normalizeRequest({ method, url, headers, body }, context);
}

function parseRequestLine(line) {
  const parts = line.split(/\s+/);
  const first = parts[0]?.toUpperCase();
  if (METHODS.has(first)) {
    return {
      method: first === "GRAPHQL" ? "POST" : first,
      url: parts[1],
    };
  }
  return {
    method: "GET",
    url: parts[0],
  };
}

function parseHeader(line) {
  const index = line.indexOf(":");
  if (index === -1) {
    return null;
  }
  return {
    name: line.slice(0, index).trim(),
    value: line.slice(index + 1).trim(),
  };
}

function resolveBody(rawBody, context, blockVariables) {
  const body = resolveVariables(rawBody, context, blockVariables);
  const trimmed = body.trim();
  if (!trimmed) {
    return "";
  }

  const external = trimmed.match(/^<(@(?:[A-Za-z0-9_-]+)?\s+)?(.+)$/);
  if (!external) {
    return body;
  }

  const fileReference = external[2].trim();
  const resolvedPath = path.isAbsolute(fileReference)
    ? fileReference
    : resolveExistingPath([path.join(path.dirname(context.filePath), fileReference), path.join(context.cwd, fileReference)]);
  if (!resolvedPath) {
    throwUserError(`Referenced body file not found: ${fileReference}`);
  }
  return fs.readFileSync(resolvedPath, "utf8");
}

function resolveExistingPath(candidates) {
  return candidates.find((candidate) => fs.existsSync(candidate));
}

function parseCurlBlock(text, context) {
  const command = joinCurlLines(text);
  const tokens = shellWords(command);
  if (tokens[0] !== "curl") {
    throwUserError("cURL block must start with curl");
  }

  const request = {
    method: "GET",
    url: "",
    headers: [],
    body: "",
    followRedirects: false,
  };

  for (let index = 1; index < tokens.length; index += 1) {
    const token = tokens[index];
    if (token === "-X" || token === "--request") {
      request.method = tokens[++index]?.toUpperCase() || "GET";
    } else if (token === "-H" || token === "--header") {
      const header = parseHeader(tokens[++index] || "");
      if (header) {
        request.headers.push(header);
      }
    } else if (["-d", "--data", "--data-ascii", "--data-binary", "--data-raw"].includes(token)) {
      request.body = tokens[++index] ?? "";
      if (request.method === "GET") {
        request.method = "POST";
      }
    } else if (token === "-u" || token === "--user") {
      request.headers.push(toBasicAuthHeader(tokens[++index] || ""));
    } else if (token === "-b" || token === "--cookie") {
      request.headers.push({ name: "Cookie", value: tokens[++index] || "" });
    } else if (token === "-I" || token === "--head") {
      request.method = "HEAD";
    } else if (token === "-L" || token === "--location") {
      request.followRedirects = true;
    } else if (token === "--url") {
      request.url = tokens[++index] || "";
    } else if (!token.startsWith("-") && !request.url) {
      request.url = token;
    }
  }

  request.url = resolveVariables(request.url, context, {});
  request.headers = request.headers.map((header) => ({
    name: header.name,
    value: resolveVariables(header.value, context, {}),
  }));
  request.body = resolveVariables(request.body, context, {});
  return normalizeRequest(request, context);
}

function joinCurlLines(text) {
  return text
    .split("\n")
    .filter((line) => {
      const trimmed = line.trim();
      return trimmed && !isComment(trimmed);
    })
    .join("\n")
    .replace(/\\\n/g, " ");
}

function shellWords(value) {
  const words = [];
  let current = "";
  let quote = null;
  let escaping = false;

  for (const char of value) {
    if (escaping) {
      current += char;
      escaping = false;
      continue;
    }
    if (char === "\\") {
      escaping = true;
      continue;
    }
    if (quote) {
      if (char === quote) {
        quote = null;
      } else {
        current += char;
      }
      continue;
    }
    if (char === "'" || char === "\"") {
      quote = char;
      continue;
    }
    if (/\s/.test(char)) {
      if (current) {
        words.push(current);
        current = "";
      }
      continue;
    }
    current += char;
  }

  if (current) {
    words.push(current);
  }
  return words;
}

function normalizeRequest(request, context) {
  if (!request.url) {
    throwUserError("Request URL is required");
  }

  const headers = request.headers.map((header) => {
    if (/^authorization$/i.test(header.name) && /^Basic\s+\S+\s+\S+$/i.test(header.value)) {
      return toBasicAuthHeader(header.value.replace(/^Basic\s+/i, ""));
    }
    return header;
  });

  return {
    method: request.method || (request.body ? "POST" : "GET"),
    url: request.url,
    headers,
    body: maybeEncodeGraphqlBody(request.body || "", headers),
    followRedirects: request.followRedirects ?? true,
    context,
  };
}

function toBasicAuthHeader(value) {
  const normalized = value.includes(":") ? value : value.trim().replace(/\s+/, ":");
  return {
    name: "Authorization",
    value: `Basic ${Buffer.from(normalized, "utf8").toString("base64")}`,
  };
}

function maybeEncodeGraphqlBody(body, headers) {
  const requestType = headers.find((header) => /^x-request-type$/i.test(header.name))?.value;
  if (!requestType || !/^graphql$/i.test(requestType.trim())) {
    return body;
  }

  const separator = body.search(/\n\s*\n/);
  const query = separator === -1 ? body.trim() : body.slice(0, separator).trim();
  const variablesText = separator === -1 ? "" : body.slice(separator).trim();
  const variables = variablesText ? JSON.parse(variablesText) : undefined;
  return JSON.stringify(variables ? { query, variables } : { query });
}

function isComment(line) {
  return line.startsWith("#") || line.startsWith("//");
}

function isVariableDeclaration(line) {
  return /^@[A-Za-z_.\-$\d\u00A1-\uFFFF]+\s*=/.test(line);
}

function parseVariableDeclaration(line) {
  const parsed = tryParseVariableDeclaration(line);
  if (!parsed) {
    throwUserError(`Invalid variable declaration: ${line}`);
  }
  return parsed;
}

function tryParseVariableDeclaration(line) {
  const match = line.match(/^@([A-Za-z_.\-$\d\u00A1-\uFFFF]+)\s*=\s*(.*)$/u);
  if (!match) {
    return null;
  }
  return [match[1], unquoteConfigValue(match[2].trim())];
}

function resolveVariables(value, context, blockVariables) {
  return value.replace(/\{\{\s*([^}]+?)\s*\}\}/g, (match, rawName) => {
    const name = rawName.trim();
    if (name.startsWith("env.")) {
      return resolveDotenvReference(name.slice("env.".length), context);
    }
    if (name.startsWith("$")) {
      return resolveSystemVariable(name, context);
    }
    if (Object.hasOwn(blockVariables, name)) {
      return resolveVariables(blockVariables[name], context, blockVariables);
    }
    if (Object.hasOwn(context.fileVariables, name)) {
      return resolveVariables(context.fileVariables[name], context, blockVariables);
    }
    if (Object.hasOwn(context.envVariables, name)) {
      return resolveVariables(String(context.envVariables[name]), context, blockVariables);
    }
    return match;
  });
}

function resolveDotenvReference(name, context) {
  if (Object.hasOwn(context.dotenvVariables, name)) {
    return context.dotenvVariables[name];
  }
  throwUserError(`Env variable ${name} not found`);
}

function resolveSystemVariable(name, context) {
  const [variable, ...args] = name.slice(1).split(/\s+/);
  if (variable === "guid") {
    return crypto.randomUUID();
  }
  if (variable === "randomInt") {
    const min = Number(args[0] ?? 0);
    const max = Number(args[1] ?? 1000);
    return String(Math.floor(Math.random() * (max - min)) + min);
  }
  if (variable === "timestamp") {
    return String(Math.floor(offsetDate(new Date(), args).getTime() / 1000));
  }
  if (variable === "datetime" || variable === "localDatetime") {
    return formatDate(offsetDate(new Date(), args.slice(1)), args[0] || "iso8601", variable === "localDatetime");
  }
  if (variable === "processEnv") {
    return process.env[resolveIndirectEnvName(args.join(" "), context)] ?? "";
  }
  if (variable === "dotenv") {
    return readDotenv(context, resolveIndirectEnvName(args.join(" "), context));
  }
  return `{{${name}}}`;
}

function resolveIndirectEnvName(name, context) {
  const trimmed = name.trim();
  if (!trimmed.startsWith("%")) {
    return trimmed;
  }
  const envKey = trimmed.slice(1);
  return String(context.envVariables[envKey] ?? envKey);
}

function readDotenv(context, key) {
  return context.dotenvVariables[key] ?? "";
}

function offsetDate(date, args) {
  const amount = Number(args[0] ?? 0);
  const unit = args[1] ?? "s";
  if (!Number.isFinite(amount) || amount === 0) {
    return date;
  }
  const next = new Date(date);
  const multipliers = {
    ms: 1,
    s: 1000,
    m: 60_000,
    h: 3_600_000,
    d: 86_400_000,
    w: 604_800_000,
  };
  if (unit === "M") {
    next.setMonth(next.getMonth() + amount);
  } else if (unit === "y") {
    next.setFullYear(next.getFullYear() + amount);
  } else {
    next.setTime(next.getTime() + amount * (multipliers[unit] ?? 1000));
  }
  return next;
}

function formatDate(date, format, local) {
  if (format === "rfc1123") {
    return date.toUTCString();
  }
  if (format === "iso8601") {
    return local ? formatLocalIso(date) : date.toISOString();
  }
  return local ? formatLocalIso(date) : date.toISOString();
}

function formatLocalIso(date) {
  const pad = (value, size = 2) => String(value).padStart(size, "0");
  return `${date.getFullYear()}-${pad(date.getMonth() + 1)}-${pad(date.getDate())}T${pad(date.getHours())}:${pad(date.getMinutes())}:${pad(date.getSeconds())}.${pad(date.getMilliseconds(), 3)}`;
}

function toCurlArgs(request, outputPaths) {
  const args = [
    "--silent",
    "--show-error",
    "--request",
    request.method,
    "--url",
    request.url,
    "--dump-header",
    outputPaths.headers,
    "--output",
    outputPaths.body,
    "--write-out",
    "%{http_code}\\n%{time_total}\\n%{size_download}\\n%{content_type}\\n%{url_effective}",
    "--cookie-jar",
    cookieJar,
    "--cookie",
    cookieJar,
  ];

  if (request.followRedirects) {
    args.push("--location");
  }
  for (const header of request.headers) {
    args.push("--header", `${header.name}: ${header.value}`);
  }
  if (request.body) {
    const bodyPath = outputPaths.requestBody;
    fs.writeFileSync(bodyPath, request.body);
    args.push("--data-binary", `@${bodyPath}`);
  }
  return args;
}

function toCurlCommand(request) {
  const parts = ["curl", "-i", "-X", shellQuote(request.method), shellQuote(request.url)];
  for (const header of request.headers) {
    parts.push("-H", shellQuote(`${header.name}: ${header.value}`));
  }
  if (request.body) {
    parts.push("--data-binary", shellQuote(request.body));
  }
  return parts.join(" ");
}

function shellQuote(value) {
  return `'${String(value).replace(/'/g, "'\\''")}'`;
}

function runCurl(request, metadata) {
  fs.mkdirSync(stateDir, { recursive: true });
  const tmpDir = fs.mkdtempSync(path.join(os.tmpdir(), "zed-rest-client-"));
  const outputPaths = {
    headers: path.join(tmpDir, "headers.txt"),
    body: path.join(tmpDir, "body.bin"),
    requestBody: path.join(tmpDir, "request-body.txt"),
  };
  const args = toCurlArgs(request, outputPaths);

  printRequest(request, metadata);
  const started = Date.now();
  const result = spawnSync("curl", args, {
    encoding: "utf8",
    maxBuffer: 20 * 1024 * 1024,
  });
  const durationMs = Date.now() - started;

  if (result.error) {
    throwUserError(result.error.message);
  }
  if (result.stderr) {
    process.stderr.write(result.stderr);
  }

  const [status, curlTime, size, contentType, effectiveUrl] = result.stdout.trimEnd().split("\n");
  const headers = readOptional(outputPaths.headers);
  const body = fs.existsSync(outputPaths.body) ? fs.readFileSync(outputPaths.body) : Buffer.alloc(0);
  const textBody = decodeTextBody(body, contentType);

  console.log("");
  console.log(`< HTTP ${status || "000"} (${durationMs}ms, curl ${curlTime || "n/a"}s, ${size || body.length} bytes)`);
  if (effectiveUrl && effectiveUrl !== request.url) {
    console.log(`< URL ${effectiveUrl}`);
  }
  console.log("");
  process.stdout.write(headers.trimEnd());
  console.log("");
  console.log("");
  if (textBody !== null) {
    const formattedBody = formatResponseBody(textBody, contentType);
    process.stdout.write(formattedBody);
    if (!formattedBody.endsWith("\n")) {
      console.log("");
    }
  } else {
    console.log(`[binary response saved to ${outputPaths.body}]`);
  }

  const statusCode = Number(status || 0);
  appendHistory({
    at: new Date().toISOString(),
    file: metadata.filePath,
    line: metadata.block.startLine,
    method: request.method,
    url: request.url,
    status: statusCode,
    durationMs,
  });

  if (result.status !== 0) {
    process.exit(result.status ?? 1);
  }
  if (statusCode >= 400) {
    process.exit(1);
  }
}

function printRequest(request, metadata) {
  console.log(`> ${request.method} ${request.url}`);
  console.log(`> file: ${metadata.filePath}:${metadata.block.startLine}`);
  for (const header of request.headers) {
    console.log(`> ${header.name}: ${header.value}`);
  }
  if (request.body) {
    console.log(`> body: ${Buffer.byteLength(request.body)} bytes`);
  }
}

function readOptional(filePath) {
  return fs.existsSync(filePath) ? fs.readFileSync(filePath, "utf8") : "";
}

function decodeTextBody(body, contentType = "") {
  const type = String(contentType || "").toLowerCase();
  const looksText = TEXT_CONTENT_TYPES.some((prefix) => type.startsWith(prefix) || type.includes(prefix));
  const hasNullBytes = body.includes(0);
  if (!looksText && hasNullBytes) {
    return null;
  }
  return body.toString("utf8");
}

function formatResponseBody(body, contentType = "") {
  if (!isJsonContentType(contentType)) {
    return body;
  }

  try {
    return JSON.stringify(JSON.parse(body), null, 2);
  } catch {
    return body;
  }
}

function isJsonContentType(contentType = "") {
  const type = String(contentType).toLowerCase();
  return type.includes("application/json") || type.includes("+json");
}

function appendHistory(entry) {
  fs.mkdirSync(stateDir, { recursive: true });
  const existing = fs.existsSync(historyPath)
    ? fs.readFileSync(historyPath, "utf8").split("\n").filter(Boolean)
    : [];
  existing.push(JSON.stringify(entry));
  fs.writeFileSync(historyPath, `${existing.slice(-50).join("\n")}\n`);
}
