import os
import signal
import subprocess
import threading

import sublime
import sublime_plugin


OUTPUT_PANEL = "http_client"
SETTINGS_FILE = "HTTP Client.sublime-settings"
ACTIVE_PROCESSES = {}
LAST_REQUESTS = {}


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


def run_active_request(window, operation):
    view = window.active_view()
    file_path = view.file_name() if view else None
    if file_path is None:
        window.status_message("HTTP Client: Save the request file before sending it.")
        return

    view.run_command("save")
    line = view.rowcol(view.sel()[0].begin())[0] + 1
    run_request(window, operation, file_path, line, project_root(window, file_path))


def run_request(window, operation, file_path, line, cwd):
    if window.id() in ACTIVE_PROCESSES:
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
    process = subprocess.Popen(
        command,
        cwd=cwd,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        start_new_session=True,
    )
    ACTIVE_PROCESSES[window.id()] = process
    window.status_message("HTTP Client: Sending request.")

    thread = threading.Thread(target=collect_result, args=(window, operation, process), daemon=True)
    thread.start()


def collect_result(window, operation, process):
    output, _ = process.communicate()
    sublime.set_timeout(lambda: show_result(window, operation, process.returncode, output), 0)


def show_result(window, operation, return_code, output):
    ACTIVE_PROCESSES.pop(window.id(), None)
    if operation == "copy-curl" and return_code == 0:
        window.status_message(output.strip() or "HTTP Client: Copied request as cURL.")
        return

    panel = window.create_output_panel(OUTPUT_PANEL)
    panel.assign_syntax("Packages/HTTP Client/HTTP Client Response.sublime-syntax")
    panel.run_command("http_client_replace_output", {"text": output})
    window.run_command("show_panel", {"panel": "output." + OUTPUT_PANEL})
    window.status_message(
        "HTTP Client: Request finished." if return_code == 0 else "HTTP Client: Request failed."
    )


def project_root(window, file_path):
    for folder in window.folders():
        if os.path.commonpath([file_path, folder]) == folder:
            return folder
    return os.path.dirname(file_path)


def bundled_runner_path():
    return os.path.abspath(
        os.path.join(os.path.dirname(os.path.realpath(__file__)), "..", "..", "scripts", "zed-rest-client.mjs")
    )
