# HTTP Client

HTTP request runner for Zed with support for `.http` and `.rest` files.

It provides:

- syntax highlighting for HTTP request files
- runnable request blocks inside the editor
- curl-backed execution in Zed's task terminal
- pretty-printed JSON responses
- simple variables, `.env` lookup, cookies, and request history

The extension keeps the Rust side minimal. Request parsing and execution live in
[`scripts/zed-rest-client.mjs`](scripts/zed-rest-client.mjs).

## Install

### Marketplace

Install `HTTP Client` from the Zed extensions panel once it is published.

### Dev Extension

1. Clone this repository to `~/repos/zed-http-client`.
2. Open Zed.
3. Run `zed: extensions`.
4. Click `Install Dev Extension`.
5. Select `~/repos/zed-http-client`.

Published installs resolve the bundled runner from Zed's extension installation
directory on macOS, Linux, and Windows. For dev extensions loaded from an
arbitrary local path, set `HTTP_CLIENT_EXTENSION_DIR` to the extension root so
the task runner can find `scripts/zed-rest-client.mjs`.

## Example Request File

[`examples/sample.http`](examples/sample.http) contains a generic multi-request example:

```http
@my_app_one_base = https://api.my-app-one.example
@my_app_two_base = https://api.my-app-two.example
@api_token = demo-token

### Create a draft record
POST {{my_app_one_base}}/v1/articles
Content-Type: application/json
Authorization: Bearer {{api_token}}

{
  "title": "Quarterly roadmap",
  "status": "draft",
  "summary": "Initial planning document for the next launch window.",
  "tags": ["planning", "launch", "internal"]
}

### Sync the record to another service
POST {{my_app_two_base}}/v1/imports
Content-Type: application/json

{
  "sourceId": "article-123",
  "sourceName": "my_app_one",
  "targetName": "my_app_two",
  "published": false
}
```

Run a request with:

- the runnable button next to the request URL
- `task: Spawn`, then `HTTP Client: Send Request`
- `task: Rerun` to rerun the previous request

The response is printed to Zed's task terminal. JSON responses are formatted
with indentation for readability.

## Supported Syntax

- multiple requests separated by `###`
- method request lines like `POST https://example.com HTTP/1.1`
- URL-only request lines, treated as `GET`
- request headers in `Name: value` form
- request bodies after a blank line
- query continuation lines starting with `?` or `&`
- file variables with `@name = value`
- variables in URL, headers, and body with `{{name}}`
- dotenv variables with `{{env.NAME}}`
- external body references like `< ./body.json` and `<@ ./body.json`
- GraphQL bodies when `X-Request-Type: GraphQL` is present
- simple cURL blocks beginning with `curl`
- basic auth via `Authorization: Basic user password` or cURL `-u user:pass`

## Variables

### File Variables

```http
@base_url = https://api.my-app-one.example
@content_type = application/json

GET {{base_url}}/v1/health
Accept: {{content_type}}
```

Single quotes, double quotes, or no quotes are accepted on the right-hand side:

```http
@quoted_double = "hello"
@quoted_single = 'world'
@plain = unquoted
```

### Dotenv Variables

The runner looks for the nearest `.env` file by walking upward from the request
file directory:

```http
GET {{env.API_BASE_URL}}/health
Authorization: Bearer {{env.API_TOKEN}}
```

If a referenced key does not exist, the runner exits with:

```text
Env variable API_TOKEN not found
```

### System Variables

- `{{$guid}}`
- `{{$randomInt min max}}`
- `{{$timestamp [offset option]}}`
- `{{$datetime rfc1123|iso8601 [offset option]}}`
- `{{$localDatetime rfc1123|iso8601 [offset option]}}`
- `{{$processEnv [%]envVarName}}`

## State

- cookies are stored under `~/.zed-rest-client/cookies.txt`
- request history is stored under `~/.zed-rest-client/history.jsonl`

## Dev Environment Override

For local development, export `HTTP_CLIENT_EXTENSION_DIR` before spawning tasks:

```bash
export HTTP_CLIENT_EXTENSION_DIR="$PWD"
```

## Limits

This extension intentionally maps the workflow to Zed features that exist
today. It does not currently provide a dedicated response pane or CodeLens-style
controls.

Not implemented in this MVP:

- digest auth
- Azure AD / Microsoft Identity token acquisition
- AWS Signature v4 signing
- SSL client certificate settings
- interactive prompt variables
- request variables such as `{{login.response.body.$.token}}`
- hover, diagnostics, go-to-definition, and find-references for variables
- generated code snippets for other languages

## Local CLI Testing

From the repository root:

```bash
node scripts/zed-rest-client.mjs curl \
  --file examples/sample.http \
  --line 5 \
  --cwd "$PWD"
```

```bash
node scripts/zed-rest-client.mjs send \
  --file examples/sample.http \
  --line 5 \
  --cwd "$PWD" \
  --dry-run
```

Use `send` without `--dry-run` to execute the request.
