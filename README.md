# Zed REST Client

Local Zed extension for `.http` and `.rest` files. It adds HTTP syntax support,
inline runnable actions for request blocks, and a curl-backed runner that prints
the response in Zed's task terminal.

This extension intentionally keeps the Rust side minimal. Zed loads the language
extension; request execution is handled by `scripts/zed-rest-client.mjs` and
`curl`.

## Install as a dev extension

1. Open Zed.
2. Run `zed: extensions` from the command palette.
3. Click `Install Dev Extension`.
4. Select this directory: `~/repos/zed-rest-client`.
5. Open a `.http` or `.rest` file.

This extension uses `id = "http"` so it replaces the installed highlight-only
HTTP extension while you are using it as a dev extension.

## Use

Open a request block in a `.http` file:

```http
@base=http://127.0.0.1:7790

### BILD
POST {{base}}/api/cms/export
Content-Type: application/json

{
  "tenant": "bild",
  "article_id": "manual-test-bild",
  "title": "Manual test headline",
  "body": "Manual test body",
  "category": "politics and government",
  "source_name": "newsapi",
  "url": "https://example.com/source",
  "article_summary": "Manual summary"
}
```

Run the request with either:

- The runnable button that appears next to the request URL.
- `task: Spawn`, then `REST Client: Send Request`.
- `task: Rerun` to rerun the previous request.

The output is written to Zed's task terminal pane. Zed provides cancellation by
stopping the running task.

## Supported request syntax

- Multiple requests separated by `###`.
- Method request lines, for example `POST https://example.com HTTP/1.1`.
- URL-only request lines, treated as `GET`.
- Request headers in `Name: value` form.
- Request bodies after a blank line.
- Query continuation lines starting with `?` or `&`.
- File variables with `@name = value`.
- Variables in URL, headers, and body with `{{name}}`.
- Dotenv variables with `{{env.NAME}}`. The nearest `.env` is found by walking
  upward from the request file directory.
- System variables:
  - `{{$guid}}`
  - `{{$randomInt min max}}`
  - `{{$timestamp [offset option]}}`
  - `{{$datetime rfc1123|iso8601 [offset option]}}`
  - `{{$localDatetime rfc1123|iso8601 [offset option]}}`
  - `{{$processEnv [%]envVarName}}`
  - `{{$dotenv [%]variableName}}`
- External body references like `< ./body.json` and `<@ ./body.json`.
- GraphQL bodies when `X-Request-Type: GraphQL` is present.
- Simple cURL blocks beginning with `curl`.
- Basic Auth via `Authorization: Basic user password` or cURL `-u user:pass`.
- Cookie persistence through curl's cookie jar at `~/.zed-rest-client/cookies.txt`.
- Request history at `~/.zed-rest-client/history.jsonl`.
- Copy request as cURL via `REST Client: Copy Request as cURL`.

## Environment variables

Create `.zed-rest-client.env.json` next to the `.http` file or at the worktree
root:

```json
{
  "$shared": {
    "version": "v1"
  },
  "local": {
    "host": "127.0.0.1:7790",
    "base": "http://{{host}}"
  },
  "prod": {
    "base": "https://api.example.com"
  }
}
```

Select the environment with:

```bash
ZED_REST_ENV=local
```

Zed tasks inherit the terminal environment.

You can also reference `.env` values directly:

```http
GET {{env.API_BASE_URL}}/health
Authorization: Bearer {{env.API_TOKEN}}
```

If the nearest `.env` does not contain a referenced key, the runner exits with:

```text
Env variable API_TOKEN not found
```

## Current limits

Zed extensions do not currently expose a VS Code-style webview response preview,
custom bottom panel, or CodeLens API for this exact workflow. The implementation
uses Zed language runnables and task terminal output instead.

Not implemented in this MVP:

- Digest Auth.
- Azure AD / Microsoft Identity token acquisition.
- AWS Signature v4 signing.
- SSL client certificate settings.
- Interactive prompt variables.
- Request variables such as `{{login.response.body.$.token}}`.
- Hover, diagnostics, go-to-definition, and find-references for variables.
- Rich image preview in a custom pane. Binary/image responses are saved to a
  temp file and the path is printed.
- Save response buttons. Use the printed temp path or rerun the equivalent curl
  command with `--output`.
- Code snippet generation for Python, JavaScript, and other languages.

These are documented as future extension work, not hidden behavior.

## Local CLI testing

Print the cURL command for the request block containing a line:

```bash
node ~/repos/zed-rest-client/scripts/zed-rest-client.mjs curl \
  --file ~/repos/nmt-aigency-iv/src/cms/apps/api/src/__tests__/import.newsos.http \
  --line 4 \
  --cwd ~/repos/nmt-aigency-iv
```

Send the request:

```bash
node ~/repos/zed-rest-client/scripts/zed-rest-client.mjs send \
  --file ~/repos/nmt-aigency-iv/src/cms/apps/api/src/__tests__/import.newsos.http \
  --line 4 \
  --cwd ~/repos/nmt-aigency-iv
```

Use `--dry-run` with `send` to verify parsing without sending the request.
