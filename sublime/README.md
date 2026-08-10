# Sublime Text

The Sublime package adapts the shared Node runner to Sublime Text. It supports
the same request parsing, `.env` variables, system variables, cURL blocks,
cookie jar, history, JSON formatting, and cURL export as the Zed extension.

## Install locally

From the repository root:

```sh
ln -s "$PWD/sublime/HTTP Client" "$HOME/Library/Application Support/Sublime Text/Packages/HTTP Client"
```

Restart Sublime Text, then use one of these commands from the Command Palette:

- `HTTP Client: Send Request`
- `HTTP Client: Copy Request as cURL`
- `HTTP Client: Rerun Last Request`
- `HTTP Client: Cancel Request`

The current request is selected from the cursor location and response text is
shown in Sublime's output panel. macOS shortcuts are `Cmd+Alt+R` to send,
`Cmd+Alt+L` to rerun, and `Cmd+Alt+K` to cancel.

Every HTTP or cURL request line also shows `Send` and `Copy cURL` links. Both
`.http` and `.rest` files are supported.

Use `{{env.NAME}}` for values from the nearest `.env` file. The runner searches
the request directory and its parents, and reports `Env variable NAME not found`
when the variable is missing.

`node` must be available in Sublime's environment. Set an absolute Node path
in `Preferences: HTTP Client Settings` when Sublime is launched without your
shell's Node path.
