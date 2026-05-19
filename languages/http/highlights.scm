(method) @function.method
(comment) @comment

(target_url) @string.url
(host) @string.url
(path) @string.url

(header name: (name) @property)
(header value: (value) @string)

(status_code) @constant.numeric
(status_text) @constant.language
(http_version) @keyword

(variable) @variable
(script_variable) @variable.special
(variable_declaration name: (identifier) @variable)
(variable_declaration value: (value) @string)

(json_body) @string.special
(xml_body) @string.special
(graphql_body) @string.special
(external_body) @string.special
(form_data) @string.special

(query_param) @string
