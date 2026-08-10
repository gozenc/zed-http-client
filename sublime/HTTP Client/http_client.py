import os
import re
import signal
import subprocess
import tempfile

import sublime
import sublime_plugin


SETTINGS_FILE = "HTTP Client.sublime-settings"
ACTIVE_PROCESSES = {}
LAST_REQUESTS = {}
REQUEST_LINE = re.compile(r"^\s*(?:GET|POST|PUT|PATCH|DELETE|HEAD|OPTIONS|CONNECT|TRACE|GRAPHQL)\b|^\s*curl\b", re.I)


class HttpClientSendRequestCommand(sublime_plugin.WindowCommand):
    def run(self):
        run_active_request(self.window, "send")


class HttpClientCopyRequestAsCurlCommand(sublime_plugin.WindowCommand):
    def run(self):
        run_active_request(self.window, "copy-curl")


class HttpClientRerunLastRequestCommand(sublime_plugin.WindowCommand):
    def run(self):
        request = LAST_REQUESTS.get(self.window.id())
        if request is None:
            self.window.status_message("HTTP Client: No request to rerun.")
            return
        run_request(self.window, "send", *request)


class HttpClientCancelRequestCommand(sublime_plugin.WindowCommand):
    def run(self):
        process = ACTIVE_PROCESSES.get(self.window.id())
        if process is None:
            self.window.status_message("HTTP Client: No request is running.")
            return
        os.killpg(process.pid, signal.SIGTERM)
        self.window.status_message("HTTP Client: Cancelling request.")


class HttpClientSendRequestAtLineCommand(sublime_plugin.WindowCommand):
    def run(self, line):
        run_request_from_view(self.window.active_view(), "send", line)


class HttpClientCopyRequestAsCurlAtLineCommand(sublime_plugin.WindowCommand):
    def run(self, line):
        run_request_from_view(self.window.active_view(), "copy-curl", line)


class HttpClientRequestActions(sublime_plugin.EventListener):
    def on_load_async(self, view):
        schedule_request_actions(view)

    def on_activated_async(self, view):
        schedule_request_actions(view)

    def on_modified_async(self, view):
        schedule_request_actions(view)

    def on_close(self, view):
        view.erase_regions("http_client_actions")


def run_active_request(window, operation):
    view = window.active_view()
    file_path = view.file_name() if view else None
    if file_path is None:
        window.status_message("HTTP Client: Save the request file before sending it.")
        return

    view.run_command("save")
    line = view.rowcol(view.sel()[0].begin())[0] + 1
    run_request(window, operation, file_path, line, project_root(window, file_path))


def schedule_request_actions(view):
    if view.file_name() and os.path.splitext(view.file_name())[1].lower() in (".http", ".rest"):
        sublime.set_timeout(lambda: update_request_actions(view), 100)


def update_request_actions(view):
    if not view.is_valid():
        return

    regions = []
    annotations = []
    for row in range(view.rowcol(view.size())[0] + 1):
        region = view.line(view.text_point(row, 0))
        if not REQUEST_LINE.match(view.substr(region)):
            continue
        line = row + 1
        regions.append(region)
        annotations.append('<a href="subl:http_client_send_request_at_line {{&quot;line&quot;: {0}}}">Send</a> <a href="subl:http_client_copy_request_as_curl_at_line {{&quot;line&quot;: {0}}}">Copy cURL</a>'.format(line))
    view.add_regions(
        "http_client_actions",
        regions,
        "",
        "",
        sublime.DRAW_NO_FILL,
        annotations,
    )


def run_request_from_view(view, operation, line):
    window = view.window()
    file_path = view.file_name()
    cwd = project_root(window, file_path)
    view.run_command("save")
    run_request(window, operation, file_path, int(line), cwd)


def run_request(window, operation, file_path, line, cwd):
    active_process = ACTIVE_PROCESSES.get(window.id())
    if active_process and active_process.poll() is not None:
        ACTIVE_PROCESSES.pop(window.id(), None)
    elif active_process:
        window.status_message("HTTP Client: A request is already running.")
        return

    if operation == "send":
        LAST_REQUESTS[window.id()] = (file_path, line, cwd)

    settings = sublime.load_settings(SETTINGS_FILE)
    command = [
        settings.get("node_binary") or "node",
        settings.get("runner_path") or bundled_runner_path(),
        operation,
        "--file",
        file_path,
        "--line",
        str(line),
        "--cwd",
        cwd,
    ]
    if operation == "send":
        show_pending(window)
    try:
        process = subprocess.Popen(
            command,
            cwd=cwd,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
            start_new_session=True,
        )
    except OSError as error:
        show_result(window, operation, 1, "http-client: {}\n".format(error))
        return
    ACTIVE_PROCESSES[window.id()] = process
    window.status_message("HTTP Client: Sending request.")
    output, _ = process.communicate()
    show_result(window, operation, process.returncode, output)


def show_result(window, operation, return_code, output):
    ACTIVE_PROCESSES.pop(window.id(), None)
    descriptor, path = tempfile.mkstemp(prefix="http-client-response-", suffix=".txt")
    with os.fdopen(descriptor, "w") as response_file:
        response_file.write(output)
    response_view = window.open_file(path)
    response_view.assign_syntax("Packages/HTTP Client/HTTP Client Response.sublime-syntax")
    window.focus_view(response_view)
    window.status_message(
        "HTTP Client: Request finished." if return_code == 0 else "HTTP Client: Request failed."
    )


def show_pending(window):
    window.status_message("HTTP Client: Sending request.")


def project_root(window, file_path):
    for folder in window.folders():
        if os.path.commonpath([file_path, folder]) == folder:
            return folder
    return os.path.dirname(file_path)


def bundled_runner_path():
    return os.path.abspath(
        os.path.join(os.path.dirname(os.path.realpath(__file__)), "..", "..", "scripts", "zed-rest-client.mjs")
    )
