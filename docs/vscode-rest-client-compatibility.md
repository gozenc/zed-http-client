# VS Code REST Client compatibility notes

The pasted VS Code REST Client feature list is the compatibility target, but
Zed's extension surfaces are different. This extension maps the workflow to Zed
features that exist today:

- Send request: Zed runnable task.
- Cancel request: stop the Zed task terminal process.
- Rerun request: Zed `task: Rerun`.
- Response pane: Zed task terminal pane.
- Syntax highlight: tree-sitter HTTP grammar.
- Multiple requests: `###` block parsing.
- Copy request as cURL: Zed task that pipes to `pbcopy`.
- History: local JSONL file under `~/.zed-rest-client`.
- Cookies: curl cookie jar under `~/.zed-rest-client`.

Features that require additional Zed APIs or a larger implementation are listed
in the README under `Current limits`.
