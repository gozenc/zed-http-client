import test from "node:test";
import assert from "node:assert/strict";
import fs from "node:fs";
import os from "node:os";
import path from "node:path";
import { pathToFileURL } from "node:url";

import { getRunExitCode, isExecutedDirectly, parseDotenv, parseDotenvValue } from "./zed-rest-client.mjs";

test("parseDotenvValue handles double quoted values", () => {
  assert.equal(parseDotenvValue("\"https://api.example.com\" # comment"), "https://api.example.com");
});

test("parseDotenvValue handles single quoted values", () => {
  assert.equal(parseDotenvValue("'https://api.example.com' # comment"), "https://api.example.com");
});

test("parseDotenvValue strips inline comments from unquoted values", () => {
  assert.equal(parseDotenvValue("test-api-key # local"), "test-api-key");
});

test("parseDotenv preserves # inside quoted values", () => {
  const parsed = parseDotenv("API_URL=\"https://example.com/#fragment\" # comment\nAPI_KEY='key#part' # note");
  assert.deepEqual(parsed, {
    API_URL: "https://example.com/#fragment",
    API_KEY: "key#part",
  });
});

test("getRunExitCode fails when curl succeeds without an HTTP response", () => {
  assert.equal(getRunExitCode(0, 0), 1);
});

test("getRunExitCode fails when curl exits with a network error", () => {
  assert.equal(getRunExitCode(7, 0), 7);
});

test("getRunExitCode fails for HTTP errors", () => {
  assert.equal(getRunExitCode(0, 500), 1);
});

test("getRunExitCode succeeds for HTTP success", () => {
  assert.equal(getRunExitCode(0, 200), 0);
});

test("isExecutedDirectly handles symlinked script paths", () => {
  const tempDir = fs.mkdtempSync(path.join(os.tmpdir(), "zed-http-client-test-"));
  const scriptPath = path.join(tempDir, "runner.mjs");
  const symlinkPath = path.join(tempDir, "linked-runner.mjs");
  fs.writeFileSync(scriptPath, "");
  fs.symlinkSync(scriptPath, symlinkPath);

  assert.equal(isExecutedDirectly(symlinkPath, pathToFileURL(scriptPath).href), true);
});
