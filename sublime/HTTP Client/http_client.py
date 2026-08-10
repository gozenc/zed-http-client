import os
import re
import signal
import subprocess
import threading

import sublime
import sublime_plugin


OUTPUT_VIEW_NAME = "HTTP Client Response"
SETTINGS_FILE = "HTTP Client.sublime-settings"
ACTIVE_PROCESSES = {}
LAST_REQUESTS = {}
RESPONSE_VIEWS = {}
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


class HttpClientReplaceOutputCommand(sublime_plugin.TextCommand):
    def run(self, edit, text):
        self.view.set_read_only(False)
        self.view.replace(edit, sublime.Region(0, self.view.size()), text)
        self.view.set_read_only(True)


class HttpClientSendRequestAtLineCommand(sublime_plugin.TextCommand):
    def run(self, edit, line):
        run_request_from_view(self.view, "send", line)


class HttpClientCopyRequestAsCurlAtLineCommand(sublime_plugin.TextCommand):
    def run(self, edit, line):
        run_request_from_view(self.view, "copy-curl", line)


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
        annotations.append('<a href="send:{0}">Send</a> <a href="copy-curl:{0}">Copy cURL</a>'.format(line))
    view.add_regions(
        "http_client_actions",
        regions,
        annotations=annotations,
        on_navigate=lambda href, current_view=view: navigate_request_action(current_view, href),
    )


def navigate_request_action(view, href):
    operation, line = href.rsplit(":", 1)
    command = "http_client_send_request_at_line" if operation == "send" else "http_client_copy_request_as_curl_at_line"
    view.run_command(command, {"line": int(line)})


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

    thread = threading.Thread(target=collect_result, args=(window, operation, process), daemon=True)
    thread.start()


def collect_result(window, operation, process):
    output, _ = process.communicate()
    sublime.set_timeout(lambda: show_result(window, operation, process.returncode, output), 0)


def show_result(window, operation, return_code, output):
    ACTIVE_PROCESSES.pop(window.id(), None)
    response_view(window).run_command("http_client_replace_output", {"text": output})
    window.status_message(
        "HTTP Client: Request finished." if return_code == 0 else "HTTP Client: Request failed."
    )


def show_pending(window):
    response_view(window, fresh=True).run_command("http_client_replace_output", {"text": "HTTP Client: Sending request...\n"})


def response_view(window, fresh=False):
    view = RESPONSE_VIEWS.get(window.id())
    if fresh or view is None or not view.is_valid():
        view = window.new_file()
        view.set_name(OUTPUT_VIEW_NAME)
        view.set_scratch(True)
        view.assign_syntax("Packages/HTTP Client/HTTP Client Response.sublime-syntax")
        RESPONSE_VIEWS[window.id()] = view
    window.focus_view(view)
    return view


def project_root(window, file_path):
    for folder in window.folders():
        if os.path.commonpath([file_path, folder]) == folder:
            return folder
    return os.path.dirname(file_path)


def bundled_runner_path():
    return os.path.abspath(
        os.path.join(os.path.dirname(os.path.realpath(__file__)), "..", "..", "scripts", "zed-rest-client.mjs")
    )
