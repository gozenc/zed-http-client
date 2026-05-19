#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  sym_method = 3,
  anon_sym_COLON = 4,
  aux_sym_port_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_about = 7,
  anon_sym_acct = 8,
  anon_sym_arcp = 9,
  anon_sym_cap = 10,
  anon_sym_cid = 11,
  anon_sym_coap_PLUStcp = 12,
  anon_sym_coap_PLUSws = 13,
  anon_sym_coaps_PLUStcp = 14,
  anon_sym_coaps_PLUSws = 15,
  anon_sym_data = 16,
  anon_sym_dns = 17,
  anon_sym_example = 18,
  anon_sym_file = 19,
  anon_sym_ftp = 20,
  anon_sym_geo = 21,
  anon_sym_h323 = 22,
  anon_sym_http = 23,
  anon_sym_https = 24,
  anon_sym_im = 25,
  anon_sym_info = 26,
  anon_sym_ipp = 27,
  anon_sym_mailto = 28,
  anon_sym_mid = 29,
  anon_sym_ni = 30,
  anon_sym_nih = 31,
  anon_sym_payto = 32,
  anon_sym_pkcs11 = 33,
  anon_sym_pres = 34,
  anon_sym_reload = 35,
  anon_sym_secret_DASHtoken = 36,
  anon_sym_session = 37,
  anon_sym_sms = 38,
  anon_sym_tag = 39,
  anon_sym_telnet = 40,
  anon_sym_urn = 41,
  anon_sym_ws = 42,
  anon_sym_wss = 43,
  anon_sym_AT = 44,
  anon_sym_HTTP_SLASH = 45,
  aux_sym_http_version_token1 = 46,
  anon_sym_POUND = 47,
  anon_sym_COLON_SLASH_SLASH = 48,
  sym_status_code = 49,
  sym_status_text = 50,
  aux_sym_request_token1 = 51,
  anon_sym_AMP = 52,
  anon_sym_QMARK = 53,
  anon_sym_EQ = 54,
  aux_sym_header_token1 = 55,
  aux_sym_header_token2 = 56,
  anon_sym_LBRACE_LBRACE = 57,
  anon_sym_RBRACE_RBRACE = 58,
  aux_sym_script_variable_token1 = 59,
  aux_sym_script_variable_token2 = 60,
  aux_sym_xml_body_token1 = 61,
  aux_sym_xml_body_token2 = 62,
  aux_sym_xml_body_token3 = 63,
  aux_sym_json_body_token1 = 64,
  aux_sym_json_body_token2 = 65,
  aux_sym_json_body_token3 = 66,
  aux_sym_json_body_token4 = 67,
  anon_sym_query = 68,
  anon_sym_mutation = 69,
  anon_sym_LPAREN = 70,
  anon_sym_LT = 71,
  sym_query_key = 72,
  sym_param = 73,
  sym_number = 74,
  sym_string = 75,
  anon_sym_true = 76,
  anon_sym_false = 77,
  aux_sym__whitespace_token1 = 78,
  aux_sym__newline_token1 = 79,
  sym__line = 80,
  sym_document = 81,
  sym_host = 82,
  sym_port = 83,
  sym_path = 84,
  sym_scheme = 85,
  sym_authority = 86,
  sym_http_version = 87,
  sym_target_url = 88,
  sym_response = 89,
  sym_request = 90,
  sym_pair = 91,
  sym_query_param = 92,
  sym_fragment = 93,
  sym_host_url = 94,
  sym_header = 95,
  sym_variable = 96,
  sym_script_variable = 97,
  sym_variable_declaration = 98,
  sym_xml_body = 99,
  sym_json_body = 100,
  sym_graphql_body = 101,
  sym_external_body = 102,
  sym_form_data = 103,
  sym_boolean = 104,
  aux_sym__whitespace = 105,
  aux_sym_document_repeat1 = 106,
  aux_sym_path_repeat1 = 107,
  aux_sym_target_url_repeat1 = 108,
  aux_sym_request_repeat1 = 109,
  aux_sym_request_repeat2 = 110,
  aux_sym_script_variable_repeat1 = 111,
  aux_sym_form_data_repeat1 = 112,
  aux_sym_form_data_repeat2 = 113,
  alias_sym_name = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_about] = "about",
  [anon_sym_acct] = "acct",
  [anon_sym_arcp] = "arcp",
  [anon_sym_cap] = "cap",
  [anon_sym_cid] = "cid",
  [anon_sym_coap_PLUStcp] = "coap+tcp",
  [anon_sym_coap_PLUSws] = "coap+ws",
  [anon_sym_coaps_PLUStcp] = "coaps+tcp",
  [anon_sym_coaps_PLUSws] = "coaps+ws",
  [anon_sym_data] = "data",
  [anon_sym_dns] = "dns",
  [anon_sym_example] = "example",
  [anon_sym_file] = "file",
  [anon_sym_ftp] = "ftp",
  [anon_sym_geo] = "geo",
  [anon_sym_h323] = "h323",
  [anon_sym_http] = "http",
  [anon_sym_https] = "https",
  [anon_sym_im] = "im",
  [anon_sym_info] = "info",
  [anon_sym_ipp] = "ipp",
  [anon_sym_mailto] = "mailto",
  [anon_sym_mid] = "mid",
  [anon_sym_ni] = "ni",
  [anon_sym_nih] = "nih",
  [anon_sym_payto] = "payto",
  [anon_sym_pkcs11] = "pkcs11",
  [anon_sym_pres] = "pres",
  [anon_sym_reload] = "reload",
  [anon_sym_secret_DASHtoken] = "secret-token",
  [anon_sym_session] = "session",
  [anon_sym_sms] = "sms",
  [anon_sym_tag] = "tag",
  [anon_sym_telnet] = "telnet",
  [anon_sym_urn] = "urn",
  [anon_sym_ws] = "ws",
  [anon_sym_wss] = "wss",
  [anon_sym_AT] = "@",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_EQ] = "=",
  [aux_sym_header_token1] = "value",
  [aux_sym_header_token2] = "value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_script_variable_token1] = "script_variable_token1",
  [aux_sym_script_variable_token2] = "script_variable_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_xml_body_token3] = "xml_body_token3",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [aux_sym_json_body_token3] = "json_body_token3",
  [aux_sym_json_body_token4] = "json_body_token4",
  [anon_sym_query] = "query",
  [anon_sym_mutation] = "mutation",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_query_key] = "key",
  [sym_param] = "value",
  [sym_number] = "value",
  [sym_string] = "value",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_scheme] = "scheme",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_fragment] = "fragment",
  [sym_host_url] = "value",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_script_variable] = "script_variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [sym_form_data] = "form_data",
  [sym_boolean] = "value",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [aux_sym_form_data_repeat1] = "form_data_repeat1",
  [aux_sym_form_data_repeat2] = "form_data_repeat2",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_about] = anon_sym_about,
  [anon_sym_acct] = anon_sym_acct,
  [anon_sym_arcp] = anon_sym_arcp,
  [anon_sym_cap] = anon_sym_cap,
  [anon_sym_cid] = anon_sym_cid,
  [anon_sym_coap_PLUStcp] = anon_sym_coap_PLUStcp,
  [anon_sym_coap_PLUSws] = anon_sym_coap_PLUSws,
  [anon_sym_coaps_PLUStcp] = anon_sym_coaps_PLUStcp,
  [anon_sym_coaps_PLUSws] = anon_sym_coaps_PLUSws,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_dns] = anon_sym_dns,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_ftp] = anon_sym_ftp,
  [anon_sym_geo] = anon_sym_geo,
  [anon_sym_h323] = anon_sym_h323,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_https] = anon_sym_https,
  [anon_sym_im] = anon_sym_im,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_ipp] = anon_sym_ipp,
  [anon_sym_mailto] = anon_sym_mailto,
  [anon_sym_mid] = anon_sym_mid,
  [anon_sym_ni] = anon_sym_ni,
  [anon_sym_nih] = anon_sym_nih,
  [anon_sym_payto] = anon_sym_payto,
  [anon_sym_pkcs11] = anon_sym_pkcs11,
  [anon_sym_pres] = anon_sym_pres,
  [anon_sym_reload] = anon_sym_reload,
  [anon_sym_secret_DASHtoken] = anon_sym_secret_DASHtoken,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_sms] = anon_sym_sms,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_telnet] = anon_sym_telnet,
  [anon_sym_urn] = anon_sym_urn,
  [anon_sym_ws] = anon_sym_ws,
  [anon_sym_wss] = anon_sym_wss,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_script_variable_token1] = aux_sym_script_variable_token1,
  [aux_sym_script_variable_token2] = aux_sym_script_variable_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_xml_body_token3] = aux_sym_xml_body_token3,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [aux_sym_json_body_token3] = aux_sym_json_body_token3,
  [aux_sym_json_body_token4] = aux_sym_json_body_token4,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_mutation] = anon_sym_mutation,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_query_key] = sym_query_key,
  [sym_param] = aux_sym_header_token1,
  [sym_number] = aux_sym_header_token1,
  [sym_string] = aux_sym_header_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_scheme] = sym_scheme,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_fragment] = sym_fragment,
  [sym_host_url] = aux_sym_header_token1,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_script_variable] = sym_script_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [sym_form_data] = sym_form_data,
  [sym_boolean] = aux_sym_header_token1,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
  [aux_sym_form_data_repeat1] = aux_sym_form_data_repeat1,
  [aux_sym_form_data_repeat2] = aux_sym_form_data_repeat2,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_about] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h323] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_im] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nih] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkcs11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secret_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_telnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_request_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_query_key] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_host_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_script_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_body] = {
    .visible = true,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_data_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_file_path = 1,
  field_identifier = 2,
  field_key = 3,
  field_name = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 4, .length = 2},
  [13] = {.index = 4, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 4},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 4},
  [19] = {.index = 28, .length = 4},
  [20] = {.index = 32, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 3},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_identifier, 0},
  [7] =
    {field_key, 1},
  [8] =
    {field_name, 1},
    {field_value, 4},
  [10] =
    {field_key, 1},
    {field_value, 2},
  [12] =
    {field_name, 1},
    {field_value, 5},
  [14] =
    {field_key, 1},
    {field_value, 3},
  [16] =
    {field_file_path, 2},
  [17] =
    {field_name, 0},
    {field_value, 3},
  [19] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [23] =
    {field_file_path, 4},
  [24] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [3] = aux_sym_header_token1,
  },
  [5] = {
    [0] = sym_identifier,
  },
  [7] = {
    [4] = aux_sym_header_token1,
  },
  [9] = {
    [5] = aux_sym_header_token1,
  },
  [11] = {
    [2] = sym_path,
  },
  [12] = {
    [0] = alias_sym_name,
  },
  [13] = {
    [2] = aux_sym_header_token1,
  },
  [14] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [15] = {
    [0] = alias_sym_name,
  },
  [16] = {
    [2] = aux_sym_header_token1,
  },
  [17] = {
    [4] = sym_path,
  },
  [18] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [20] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable, 2,
    sym_variable,
    aux_sym_header_token1,
  aux_sym__whitespace, 2,
    aux_sym__whitespace,
    aux_sym_header_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 30,
  [70] = 41,
  [71] = 58,
  [72] = 59,
  [73] = 26,
  [74] = 56,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 45,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 57,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 5,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 7,
  [110] = 110,
  [111] = 111,
  [112] = 5,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 117,
  [118] = 110,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 110,
  [128] = 5,
  [129] = 110,
  [130] = 130,
  [131] = 121,
  [132] = 7,
  [133] = 133,
  [134] = 124,
  [135] = 125,
  [136] = 136,
  [137] = 137,
  [138] = 122,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 7,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 153,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 97,
  [191] = 175,
  [192] = 192,
  [193] = 177,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 101,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 180,
  [209] = 209,
  [210] = 210,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(636);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '(') ADVANCE(681);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == ':') ADVANCE(638);
      if (lookahead == '<') ADVANCE(683);
      if (lookahead == '=') ADVANCE(661);
      if (lookahead == '?') ADVANCE(659);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '(') ADVANCE(681);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == '?') ADVANCE(659);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == '{') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '=') ADVANCE(662);
      if (lookahead == '?') ADVANCE(660);
      if (lookahead == '{') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '?') ADVANCE(660);
      if (lookahead == '{') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead == '(') ADVANCE(682);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead == '<') ADVANCE(710);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead == ']') ADVANCE(704);
      if (lookahead == '}') ADVANCE(705);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead == '}') ADVANCE(705);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(698);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(678);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(680);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(677);
      if (lookahead == '{') ADVANCE(671);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '}') ADVANCE(672);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(676);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(673);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\f') ADVANCE(19);
      if (lookahead == '/') ADVANCE(670);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == 'c') ADVANCE(667);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '/') ADVANCE(647);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(574);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(700);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == ':') ADVANCE(638);
      if (lookahead == '=') ADVANCE(661);
      if (lookahead == '?') ADVANCE(659);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead == '{') ADVANCE(627);
      if (lookahead == '}') ADVANCE(628);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(650);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(675);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(617);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(141);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(232);
      if (lookahead == 'N') ADVANCE(239);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(149);
      if (lookahead == 'S') ADVANCE(230);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'V') ADVANCE(146);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(633);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(602);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == 'F') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == 'M') ADVANCE(453);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(600);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(370);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(371);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(435);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(318);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(289);
      END_STATE();
    case 92:
      if (lookahead == 'D') ADVANCE(280);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(508);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(409);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(157);
      END_STATE();
    case 96:
      if (lookahead == 'F') ADVANCE(338);
      END_STATE();
    case 97:
      if (lookahead == 'F') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(461);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(287);
      if (lookahead == 'T') ADVANCE(344);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(399);
      END_STATE();
    case 104:
      if (lookahead == 'K') ADVANCE(652);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(251);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(443);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(288);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(464);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(465);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(466);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(547);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(300);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(503);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(506);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(278);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(267);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(298);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(584);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(262);
      END_STATE();
    case 127:
      if (lookahead == 'S') ADVANCE(557);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(605);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(623);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(452);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(344);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(459);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(530);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(406);
      END_STATE();
    case 138:
      if (lookahead == 'V') ADVANCE(254);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 's') ADVANCE(594);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(326);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(367);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(382);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(383);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(553);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'x') ADVANCE(620);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(586);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(652);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 305:
      if (lookahead == 'f') ADVANCE(468);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(345);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(652);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(545);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(463);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(462);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(455);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(268);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(441);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 361:
      if (lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 362:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(363);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 390:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 391:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 471:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 472:
      if (lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 473:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 474:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 476:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 477:
      if (lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 478:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 479:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 480:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 481:
      if (lookahead == 'p') ADVANCE(579);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 483:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 484:
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 485:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 486:
      if (lookahead == 'q') ADVANCE(598);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 487:
      if (lookahead == 'q') ADVANCE(604);
      END_STATE();
    case 488:
      if (lookahead == 'q') ADVANCE(601);
      END_STATE();
    case 489:
      if (lookahead == 'q') ADVANCE(603);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(523);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'w') ADVANCE(524);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 592:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 593:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(577);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 606:
      if (lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 607:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 608:
      if (lookahead == 'v') ADVANCE(284);
      END_STATE();
    case 609:
      if (lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 610:
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 611:
      if (lookahead == 'w') ADVANCE(433);
      END_STATE();
    case 612:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 613:
      if (lookahead == 'w') ADVANCE(237);
      END_STATE();
    case 614:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 615:
      if (lookahead == 'x') ADVANCE(385);
      END_STATE();
    case 616:
      if (lookahead == 'x') ADVANCE(619);
      END_STATE();
    case 617:
      if (lookahead == 'x') ADVANCE(473);
      END_STATE();
    case 618:
      if (lookahead == 'x') ADVANCE(569);
      END_STATE();
    case 619:
      if (lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 620:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 621:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 622:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 623:
      if (lookahead == 'y') ADVANCE(474);
      END_STATE();
    case 624:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 625:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 626:
      if (lookahead == 'z') ADVANCE(237);
      END_STATE();
    case 627:
      if (lookahead == '{') ADVANCE(671);
      END_STATE();
    case 628:
      if (lookahead == '}') ADVANCE(672);
      END_STATE();
    case 629:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 630:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 631:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      END_STATE();
    case 632:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      END_STATE();
    case 633:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 634:
      if (eof) ADVANCE(636);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '&') ADVANCE(658);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(638);
      if (lookahead == '<') ADVANCE(684);
      if (lookahead == '=') ADVANCE(661);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 635:
      if (eof) ADVANCE(636);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '<') ADVANCE(684);
      if (lookahead == '@') ADVANCE(646);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(654);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(698);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '+') ADVANCE(541);
      if (lookahead == '/') ADVANCE(670);
      if (lookahead == 's') ADVANCE(665);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '/') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '/') ADVANCE(670);
      if (lookahead == 'a') ADVANCE(668);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '/') ADVANCE(670);
      if (lookahead == 'o') ADVANCE(666);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '/') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(664);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '/') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '?') ADVANCE(615);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(615);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(541);
      if (lookahead == 's') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(647);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(680);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(676);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(674);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'G') ADVANCE(3);
      if (lookahead == 'H') ADVANCE(4);
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'q') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 90:
      if (lookahead == '3') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 137:
      if (lookahead == 'C') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 147:
      if (lookahead == '1') ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 634},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 635},
  [10] = {.lex_state = 635},
  [11] = {.lex_state = 634},
  [12] = {.lex_state = 634},
  [13] = {.lex_state = 634},
  [14] = {.lex_state = 634},
  [15] = {.lex_state = 634},
  [16] = {.lex_state = 634},
  [17] = {.lex_state = 634},
  [18] = {.lex_state = 634},
  [19] = {.lex_state = 634},
  [20] = {.lex_state = 634},
  [21] = {.lex_state = 634},
  [22] = {.lex_state = 634},
  [23] = {.lex_state = 634},
  [24] = {.lex_state = 634},
  [25] = {.lex_state = 634},
  [26] = {.lex_state = 634},
  [27] = {.lex_state = 634},
  [28] = {.lex_state = 634},
  [29] = {.lex_state = 634},
  [30] = {.lex_state = 634},
  [31] = {.lex_state = 634},
  [32] = {.lex_state = 634},
  [33] = {.lex_state = 634},
  [34] = {.lex_state = 634},
  [35] = {.lex_state = 634},
  [36] = {.lex_state = 634},
  [37] = {.lex_state = 634},
  [38] = {.lex_state = 634},
  [39] = {.lex_state = 634},
  [40] = {.lex_state = 634},
  [41] = {.lex_state = 634},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 634},
  [44] = {.lex_state = 634},
  [45] = {.lex_state = 634},
  [46] = {.lex_state = 634},
  [47] = {.lex_state = 634},
  [48] = {.lex_state = 634},
  [49] = {.lex_state = 634},
  [50] = {.lex_state = 634},
  [51] = {.lex_state = 634},
  [52] = {.lex_state = 634},
  [53] = {.lex_state = 634},
  [54] = {.lex_state = 634},
  [55] = {.lex_state = 634},
  [56] = {.lex_state = 634},
  [57] = {.lex_state = 634},
  [58] = {.lex_state = 634},
  [59] = {.lex_state = 634},
  [60] = {.lex_state = 634},
  [61] = {.lex_state = 634},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 73},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 73},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 634},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 73},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 73},
  [82] = {.lex_state = 73},
  [83] = {.lex_state = 73},
  [84] = {.lex_state = 634},
  [85] = {.lex_state = 634},
  [86] = {.lex_state = 634},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 73},
  [89] = {.lex_state = 73},
  [90] = {.lex_state = 73},
  [91] = {.lex_state = 73},
  [92] = {.lex_state = 73},
  [93] = {.lex_state = 73},
  [94] = {.lex_state = 73},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 73},
  [98] = {.lex_state = 73},
  [99] = {.lex_state = 73},
  [100] = {.lex_state = 73},
  [101] = {.lex_state = 73},
  [102] = {.lex_state = 83},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 634},
  [106] = {.lex_state = 634},
  [107] = {.lex_state = 635},
  [108] = {.lex_state = 73},
  [109] = {.lex_state = 83},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 634},
  [121] = {.lex_state = 634},
  [122] = {.lex_state = 634},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 634},
  [125] = {.lex_state = 634},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 634},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 634},
  [134] = {.lex_state = 634},
  [135] = {.lex_state = 634},
  [136] = {.lex_state = 634},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 634},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 83},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 83},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 634},
  [151] = {.lex_state = 634},
  [152] = {.lex_state = 634},
  [153] = {.lex_state = 629},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 634},
  [159] = {.lex_state = 634},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 634},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 629},
  [165] = {.lex_state = 634},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 634},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 634},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 630},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 631},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 634},
  [180] = {.lex_state = 634},
  [181] = {.lex_state = 634},
  [182] = {.lex_state = 634},
  [183] = {.lex_state = 634},
  [184] = {.lex_state = 634},
  [185] = {.lex_state = 634},
  [186] = {.lex_state = 635},
  [187] = {.lex_state = 634},
  [188] = {.lex_state = 634},
  [189] = {.lex_state = 634},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 630},
  [192] = {.lex_state = 634},
  [193] = {.lex_state = 631},
  [194] = {.lex_state = 634},
  [195] = {.lex_state = 635},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 634},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 635},
  [200] = {.lex_state = 634},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 634},
  [203] = {.lex_state = 634},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 634},
  [206] = {.lex_state = 634},
  [207] = {.lex_state = 634},
  [208] = {.lex_state = 634},
  [209] = {.lex_state = 634},
  [210] = {.lex_state = 634},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_about] = ACTIONS(1),
    [anon_sym_acct] = ACTIONS(1),
    [anon_sym_arcp] = ACTIONS(1),
    [anon_sym_cap] = ACTIONS(1),
    [anon_sym_cid] = ACTIONS(1),
    [anon_sym_coap_PLUStcp] = ACTIONS(1),
    [anon_sym_coap_PLUSws] = ACTIONS(1),
    [anon_sym_coaps_PLUStcp] = ACTIONS(1),
    [anon_sym_coaps_PLUSws] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_dns] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_ftp] = ACTIONS(1),
    [anon_sym_geo] = ACTIONS(1),
    [anon_sym_h323] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_https] = ACTIONS(1),
    [anon_sym_im] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_ipp] = ACTIONS(1),
    [anon_sym_mailto] = ACTIONS(1),
    [anon_sym_mid] = ACTIONS(1),
    [anon_sym_ni] = ACTIONS(1),
    [anon_sym_nih] = ACTIONS(1),
    [anon_sym_payto] = ACTIONS(1),
    [anon_sym_pkcs11] = ACTIONS(1),
    [anon_sym_pres] = ACTIONS(1),
    [anon_sym_reload] = ACTIONS(1),
    [anon_sym_secret_DASHtoken] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_sms] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_telnet] = ACTIONS(1),
    [anon_sym_urn] = ACTIONS(1),
    [anon_sym_ws] = ACTIONS(1),
    [anon_sym_wss] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_script_variable_token1] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_mutation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(181),
    [sym_request] = STATE(60),
    [sym_variable] = STATE(60),
    [sym_script_variable] = STATE(60),
    [sym_variable_declaration] = STATE(60),
    [aux_sym_document_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_method] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(42), 1,
      sym_variable,
    STATE(62), 1,
      sym_host,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_path,
    STATE(159), 1,
      sym_target_url,
    STATE(163), 1,
      sym_authority,
    STATE(186), 1,
      sym_scheme,
    STATE(200), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [87] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym_header_token1,
    ACTIONS(37), 1,
      aux_sym_header_token2,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(39), 1,
      sym_host,
    STATE(48), 1,
      sym_host_url,
    STATE(54), 1,
      sym_variable,
    STATE(155), 1,
      sym_authority,
    STATE(195), 1,
      sym_scheme,
    STATE(200), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [171] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    ACTIONS(41), 1,
      aux_sym_header_token1,
    ACTIONS(43), 1,
      aux_sym_header_token2,
    STATE(3), 1,
      aux_sym__whitespace,
    STATE(39), 1,
      sym_host,
    STATE(40), 1,
      sym_variable,
    STATE(55), 1,
      sym_host_url,
    STATE(155), 1,
      sym_authority,
    STATE(195), 1,
      sym_scheme,
    STATE(200), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [255] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(47), 9,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(45), 34,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      sym_identifier,
  [312] = 5,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(47), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 36,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
  [368] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 10,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym__whitespace_token1,
    ACTIONS(55), 34,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      sym_identifier,
  [420] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(57), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 37,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [471] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(162), 1,
      sym_http_version,
    STATE(206), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(22), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [523] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    STATE(162), 1,
      sym_http_version,
    STATE(210), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(17), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [575] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(20), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [618] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(17), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [661] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(21), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [704] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [747] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(18), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [790] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [829] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [868] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [907] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(102), 1,
      sym_method,
    ACTIONS(104), 1,
      aux_sym_xml_body_token1,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(107), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(110), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [946] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [985] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1024] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1063] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(147), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(122), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1096] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(23), 1,
      aux_sym_form_data_repeat2,
    STATE(147), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(130), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1129] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(147), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(134), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1162] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(146), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_port,
    ACTIONS(144), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1189] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1212] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1235] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(161), 4,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1262] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(163), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym_port,
    ACTIONS(144), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1289] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(169), 1,
      aux_sym_xml_body_token3,
    ACTIONS(167), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1313] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(175), 1,
      aux_sym_xml_body_token3,
    ACTIONS(173), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1337] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(181), 1,
      aux_sym_xml_body_token3,
    ACTIONS(179), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1361] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 1,
      aux_sym_xml_body_token3,
    ACTIONS(185), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1385] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(193), 1,
      aux_sym_xml_body_token3,
    ACTIONS(191), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1409] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(199), 1,
      aux_sym_xml_body_token3,
    ACTIONS(197), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1433] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1454] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1475] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(211), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1496] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1517] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(219), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1538] = 11,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_authority,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    STATE(203), 1,
      sym_pair,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1575] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(233), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1596] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(237), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1617] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(241), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1638] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(245), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1659] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(249), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1680] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(253), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1701] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(257), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1722] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(197), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1743] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(261), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1764] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(265), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1785] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(269), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1806] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(273), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1827] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1848] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(277), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1869] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(281), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1890] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(285), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1911] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(289), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1932] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(9), 1,
      sym_method,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym_comment,
    STATE(61), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1961] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_method,
    ACTIONS(303), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(309), 1,
      aux_sym_script_variable_token1,
    STATE(61), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1990] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(225), 1,
      anon_sym_POUND,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2015] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(312), 1,
      anon_sym_POUND,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(91), 1,
      sym_path,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2040] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym_path,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2065] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_path,
    STATE(83), 1,
      aux_sym_path_repeat1,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2090] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(100), 1,
      sym_variable,
    ACTIONS(326), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2108] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      sym_param,
    STATE(108), 1,
      sym_variable,
    ACTIONS(328), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(330), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2130] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(340), 1,
      sym_param,
    STATE(111), 1,
      sym_variable,
    ACTIONS(336), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(338), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2149] = 3,
    ACTIONS(342), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_port,
    ACTIONS(142), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2164] = 1,
    ACTIONS(217), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2175] = 1,
    ACTIONS(283), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2186] = 1,
    ACTIONS(287), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2197] = 3,
    ACTIONS(344), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_port,
    ACTIONS(142), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2212] = 1,
    ACTIONS(275), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2223] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2235] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      sym_string,
    STATE(24), 1,
      sym_boolean,
    ACTIONS(348), 2,
      sym_identifier,
      sym_number,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
  [2253] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2269] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(356), 1,
      sym_string,
    STATE(28), 1,
      sym_boolean,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(354), 2,
      sym_identifier,
      sym_number,
  [2287] = 4,
    ACTIONS(358), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(360), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(87), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2303] = 3,
    ACTIONS(364), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
    ACTIONS(362), 3,
      anon_sym_POUND,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2317] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2333] = 4,
    ACTIONS(358), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(360), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2349] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      aux_sym_path_repeat1,
    ACTIONS(367), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2363] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(369), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2375] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(371), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2387] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2399] = 4,
    ACTIONS(375), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(377), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2415] = 4,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2431] = 4,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2447] = 4,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2463] = 4,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2479] = 4,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2495] = 3,
    ACTIONS(379), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      aux_sym_path_repeat1,
    ACTIONS(382), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2509] = 1,
    ACTIONS(239), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2518] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(384), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host,
    STATE(148), 1,
      sym_authority,
    STATE(200), 1,
      sym_pair,
  [2537] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(52), 1,
      sym_host,
    STATE(161), 1,
      sym_authority,
    STATE(200), 1,
      sym_pair,
  [2556] = 1,
    ACTIONS(388), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2565] = 1,
    ACTIONS(279), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2574] = 1,
    ACTIONS(390), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2583] = 2,
    ACTIONS(392), 1,
      anon_sym_SLASH,
    ACTIONS(382), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2594] = 1,
    ACTIONS(395), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2603] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(397), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
    ACTIONS(47), 3,
      anon_sym_HTTP_SLASH,
      sym_status_code,
      sym_status_text,
  [2618] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(402), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(400), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2632] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    STATE(112), 1,
      aux_sym__whitespace,
  [2648] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(38), 1,
      sym_variable,
  [2664] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(44), 1,
      sym_variable,
  [2680] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(410), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
    STATE(205), 1,
      sym_http_version,
  [2696] = 1,
    ACTIONS(414), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2704] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 4,
      anon_sym_HTTP_SLASH,
      sym_status_code,
      sym_status_text,
      aux_sym__whitespace_token1,
  [2714] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(418), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(416), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2728] = 1,
    ACTIONS(421), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2736] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(423), 1,
      aux_sym__whitespace_token1,
    STATE(112), 1,
      aux_sym__whitespace,
    ACTIONS(47), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2750] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym__whitespace,
  [2763] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(145), 1,
      aux_sym__whitespace,
  [2776] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym__line,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [2789] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym__whitespace,
  [2802] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(438), 1,
      sym__line,
    STATE(130), 1,
      aux_sym__whitespace,
  [2815] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      aux_sym_script_variable_token2,
    ACTIONS(440), 1,
      sym__line,
    STATE(118), 1,
      aux_sym_script_variable_repeat1,
  [2828] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym__whitespace,
  [2841] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(445), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [2854] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(447), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2867] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(449), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(121), 1,
      aux_sym__whitespace,
  [2880] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(451), 1,
      aux_sym_xml_body_token2,
    ACTIONS(453), 1,
      sym__line,
    STATE(129), 1,
      aux_sym_script_variable_repeat1,
  [2893] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2906] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(457), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(124), 1,
      aux_sym__whitespace,
  [2919] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(113), 1,
      aux_sym__whitespace,
  [2932] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      aux_sym_json_body_token3,
    ACTIONS(461), 1,
      sym__line,
    STATE(127), 1,
      aux_sym_script_variable_repeat1,
  [2945] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(464), 1,
      aux_sym__whitespace_token1,
    STATE(128), 1,
      aux_sym__whitespace,
  [2958] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      aux_sym_xml_body_token2,
    ACTIONS(467), 1,
      sym__line,
    STATE(129), 1,
      aux_sym_script_variable_repeat1,
  [2971] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(128), 1,
      aux_sym__whitespace,
  [2984] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2997] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 3,
      anon_sym_LPAREN,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3006] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(120), 1,
      aux_sym__whitespace,
  [3019] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(474), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3032] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(476), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym__whitespace,
  [3045] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    STATE(142), 1,
      aux_sym__whitespace,
  [3058] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(482), 1,
      aux_sym_json_body_token3,
    ACTIONS(484), 1,
      sym__line,
    STATE(127), 1,
      aux_sym_script_variable_repeat1,
  [3071] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(486), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(131), 1,
      aux_sym__whitespace,
  [3084] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(488), 1,
      sym__line,
    STATE(128), 1,
      aux_sym__whitespace,
  [3097] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      aux_sym_script_variable_token2,
    ACTIONS(492), 1,
      sym__line,
    STATE(118), 1,
      aux_sym_script_variable_repeat1,
  [3110] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    ACTIONS(494), 1,
      sym_status_code,
    STATE(102), 1,
      aux_sym__whitespace,
  [3123] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(496), 1,
      sym__line,
    STATE(128), 1,
      aux_sym__whitespace,
  [3136] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      aux_sym_xml_body_token3,
    STATE(143), 1,
      aux_sym_form_data_repeat1,
  [3149] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(484), 1,
      sym__line,
    ACTIONS(503), 1,
      aux_sym_json_body_token3,
    STATE(127), 1,
      aux_sym_script_variable_repeat1,
  [3162] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(505), 1,
      sym__line,
    STATE(128), 1,
      aux_sym__whitespace,
  [3175] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    ACTIONS(507), 1,
      sym_status_text,
    STATE(102), 1,
      aux_sym__whitespace,
  [3188] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(511), 1,
      aux_sym_xml_body_token3,
    STATE(143), 1,
      aux_sym_form_data_repeat1,
  [3201] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(64), 1,
      sym_host,
  [3211] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(202), 1,
      sym_fragment,
  [3221] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    STATE(139), 1,
      aux_sym__whitespace,
  [3231] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [3241] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(106), 1,
      aux_sym__whitespace,
  [3251] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(519), 1,
      aux_sym_port_token1,
  [3261] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(194), 1,
      sym_fragment,
  [3271] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
  [3281] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(179), 1,
      sym_fragment,
  [3291] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(523), 1,
      sym__line,
    STATE(123), 1,
      aux_sym_script_variable_repeat1,
  [3301] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    STATE(146), 1,
      aux_sym__whitespace,
  [3311] = 3,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    ACTIONS(525), 1,
      aux_sym_request_token1,
    STATE(107), 1,
      aux_sym__whitespace,
  [3321] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(55), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3329] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(53), 1,
      sym_host,
  [3339] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    STATE(141), 1,
      aux_sym__whitespace,
  [3349] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(65), 1,
      sym_host,
  [3359] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(527), 1,
      aux_sym_port_token1,
  [3369] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      anon_sym_COLON,
    ACTIONS(531), 1,
      anon_sym_EQ,
  [3379] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(182), 1,
      sym_fragment,
  [3389] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3399] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(533), 1,
      sym__line,
    STATE(144), 1,
      aux_sym_script_variable_repeat1,
  [3409] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(434), 1,
      sym__line,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [3419] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(535), 1,
      sym__line,
    STATE(140), 1,
      aux_sym_script_variable_repeat1,
  [3429] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(185), 1,
      sym_fragment,
  [3439] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      aux_sym__whitespace,
  [3449] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(537), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
  [3459] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
    STATE(192), 1,
      sym_fragment,
  [3469] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(539), 1,
      aux_sym_port_token1,
  [3476] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(541), 1,
      sym_query_key,
  [3483] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(543), 1,
      aux_sym_http_version_token1,
  [3490] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      sym_identifier,
  [3497] = 1,
    ACTIONS(377), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3502] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(545), 1,
      aux_sym__whitespace_token1,
  [3509] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [3516] = 1,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3521] = 1,
    ACTIONS(549), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3526] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(551), 1,
      anon_sym_AT,
  [3533] = 1,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3538] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(553), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3545] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(531), 1,
      anon_sym_EQ,
  [3552] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      anon_sym_COLON,
  [3559] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [3566] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(388), 1,
      sym_identifier,
  [3573] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(557), 1,
      aux_sym_port_token1,
  [3580] = 1,
    ACTIONS(559), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3585] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(561), 1,
      aux_sym_http_version_token1,
  [3592] = 1,
    ACTIONS(563), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3597] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(565), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3604] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(567), 1,
      sym_identifier,
  [3611] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [3618] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(395), 1,
      sym_identifier,
  [3625] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(571), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3632] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(573), 1,
      anon_sym_AT,
  [3639] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(575), 1,
      sym_identifier,
  [3646] = 1,
    ACTIONS(360), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3651] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(577), 1,
      anon_sym_AT,
  [3658] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(579), 1,
      sym_identifier,
  [3665] = 1,
    ACTIONS(581), 1,
      aux_sym_request_token1,
  [3669] = 1,
    ACTIONS(583), 1,
      aux_sym_request_token1,
  [3673] = 1,
    ACTIONS(585), 1,
      aux_sym_request_token1,
  [3677] = 1,
    ACTIONS(545), 1,
      aux_sym_request_token1,
  [3681] = 1,
    ACTIONS(587), 1,
      aux_sym_request_token1,
  [3685] = 1,
    ACTIONS(589), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 368,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 471,
  [SMALL_STATE(10)] = 523,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 618,
  [SMALL_STATE(13)] = 661,
  [SMALL_STATE(14)] = 704,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 790,
  [SMALL_STATE(17)] = 829,
  [SMALL_STATE(18)] = 868,
  [SMALL_STATE(19)] = 907,
  [SMALL_STATE(20)] = 946,
  [SMALL_STATE(21)] = 985,
  [SMALL_STATE(22)] = 1024,
  [SMALL_STATE(23)] = 1063,
  [SMALL_STATE(24)] = 1096,
  [SMALL_STATE(25)] = 1129,
  [SMALL_STATE(26)] = 1162,
  [SMALL_STATE(27)] = 1189,
  [SMALL_STATE(28)] = 1212,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1289,
  [SMALL_STATE(32)] = 1313,
  [SMALL_STATE(33)] = 1337,
  [SMALL_STATE(34)] = 1361,
  [SMALL_STATE(35)] = 1385,
  [SMALL_STATE(36)] = 1409,
  [SMALL_STATE(37)] = 1433,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1475,
  [SMALL_STATE(40)] = 1496,
  [SMALL_STATE(41)] = 1517,
  [SMALL_STATE(42)] = 1538,
  [SMALL_STATE(43)] = 1575,
  [SMALL_STATE(44)] = 1596,
  [SMALL_STATE(45)] = 1617,
  [SMALL_STATE(46)] = 1638,
  [SMALL_STATE(47)] = 1659,
  [SMALL_STATE(48)] = 1680,
  [SMALL_STATE(49)] = 1701,
  [SMALL_STATE(50)] = 1722,
  [SMALL_STATE(51)] = 1743,
  [SMALL_STATE(52)] = 1764,
  [SMALL_STATE(53)] = 1785,
  [SMALL_STATE(54)] = 1806,
  [SMALL_STATE(55)] = 1827,
  [SMALL_STATE(56)] = 1848,
  [SMALL_STATE(57)] = 1869,
  [SMALL_STATE(58)] = 1890,
  [SMALL_STATE(59)] = 1911,
  [SMALL_STATE(60)] = 1932,
  [SMALL_STATE(61)] = 1961,
  [SMALL_STATE(62)] = 1990,
  [SMALL_STATE(63)] = 2015,
  [SMALL_STATE(64)] = 2040,
  [SMALL_STATE(65)] = 2065,
  [SMALL_STATE(66)] = 2090,
  [SMALL_STATE(67)] = 2108,
  [SMALL_STATE(68)] = 2130,
  [SMALL_STATE(69)] = 2149,
  [SMALL_STATE(70)] = 2164,
  [SMALL_STATE(71)] = 2175,
  [SMALL_STATE(72)] = 2186,
  [SMALL_STATE(73)] = 2197,
  [SMALL_STATE(74)] = 2212,
  [SMALL_STATE(75)] = 2223,
  [SMALL_STATE(76)] = 2235,
  [SMALL_STATE(77)] = 2253,
  [SMALL_STATE(78)] = 2269,
  [SMALL_STATE(79)] = 2287,
  [SMALL_STATE(80)] = 2303,
  [SMALL_STATE(81)] = 2317,
  [SMALL_STATE(82)] = 2333,
  [SMALL_STATE(83)] = 2349,
  [SMALL_STATE(84)] = 2363,
  [SMALL_STATE(85)] = 2375,
  [SMALL_STATE(86)] = 2387,
  [SMALL_STATE(87)] = 2399,
  [SMALL_STATE(88)] = 2415,
  [SMALL_STATE(89)] = 2431,
  [SMALL_STATE(90)] = 2447,
  [SMALL_STATE(91)] = 2463,
  [SMALL_STATE(92)] = 2479,
  [SMALL_STATE(93)] = 2495,
  [SMALL_STATE(94)] = 2509,
  [SMALL_STATE(95)] = 2518,
  [SMALL_STATE(96)] = 2537,
  [SMALL_STATE(97)] = 2556,
  [SMALL_STATE(98)] = 2565,
  [SMALL_STATE(99)] = 2574,
  [SMALL_STATE(100)] = 2583,
  [SMALL_STATE(101)] = 2594,
  [SMALL_STATE(102)] = 2603,
  [SMALL_STATE(103)] = 2618,
  [SMALL_STATE(104)] = 2632,
  [SMALL_STATE(105)] = 2648,
  [SMALL_STATE(106)] = 2664,
  [SMALL_STATE(107)] = 2680,
  [SMALL_STATE(108)] = 2696,
  [SMALL_STATE(109)] = 2704,
  [SMALL_STATE(110)] = 2714,
  [SMALL_STATE(111)] = 2728,
  [SMALL_STATE(112)] = 2736,
  [SMALL_STATE(113)] = 2750,
  [SMALL_STATE(114)] = 2763,
  [SMALL_STATE(115)] = 2776,
  [SMALL_STATE(116)] = 2789,
  [SMALL_STATE(117)] = 2802,
  [SMALL_STATE(118)] = 2815,
  [SMALL_STATE(119)] = 2828,
  [SMALL_STATE(120)] = 2841,
  [SMALL_STATE(121)] = 2854,
  [SMALL_STATE(122)] = 2867,
  [SMALL_STATE(123)] = 2880,
  [SMALL_STATE(124)] = 2893,
  [SMALL_STATE(125)] = 2906,
  [SMALL_STATE(126)] = 2919,
  [SMALL_STATE(127)] = 2932,
  [SMALL_STATE(128)] = 2945,
  [SMALL_STATE(129)] = 2958,
  [SMALL_STATE(130)] = 2971,
  [SMALL_STATE(131)] = 2984,
  [SMALL_STATE(132)] = 2997,
  [SMALL_STATE(133)] = 3006,
  [SMALL_STATE(134)] = 3019,
  [SMALL_STATE(135)] = 3032,
  [SMALL_STATE(136)] = 3045,
  [SMALL_STATE(137)] = 3058,
  [SMALL_STATE(138)] = 3071,
  [SMALL_STATE(139)] = 3084,
  [SMALL_STATE(140)] = 3097,
  [SMALL_STATE(141)] = 3110,
  [SMALL_STATE(142)] = 3123,
  [SMALL_STATE(143)] = 3136,
  [SMALL_STATE(144)] = 3149,
  [SMALL_STATE(145)] = 3162,
  [SMALL_STATE(146)] = 3175,
  [SMALL_STATE(147)] = 3188,
  [SMALL_STATE(148)] = 3201,
  [SMALL_STATE(149)] = 3211,
  [SMALL_STATE(150)] = 3221,
  [SMALL_STATE(151)] = 3231,
  [SMALL_STATE(152)] = 3241,
  [SMALL_STATE(153)] = 3251,
  [SMALL_STATE(154)] = 3261,
  [SMALL_STATE(155)] = 3271,
  [SMALL_STATE(156)] = 3281,
  [SMALL_STATE(157)] = 3291,
  [SMALL_STATE(158)] = 3301,
  [SMALL_STATE(159)] = 3311,
  [SMALL_STATE(160)] = 3321,
  [SMALL_STATE(161)] = 3329,
  [SMALL_STATE(162)] = 3339,
  [SMALL_STATE(163)] = 3349,
  [SMALL_STATE(164)] = 3359,
  [SMALL_STATE(165)] = 3369,
  [SMALL_STATE(166)] = 3379,
  [SMALL_STATE(167)] = 3389,
  [SMALL_STATE(168)] = 3399,
  [SMALL_STATE(169)] = 3409,
  [SMALL_STATE(170)] = 3419,
  [SMALL_STATE(171)] = 3429,
  [SMALL_STATE(172)] = 3439,
  [SMALL_STATE(173)] = 3449,
  [SMALL_STATE(174)] = 3459,
  [SMALL_STATE(175)] = 3469,
  [SMALL_STATE(176)] = 3476,
  [SMALL_STATE(177)] = 3483,
  [SMALL_STATE(178)] = 3490,
  [SMALL_STATE(179)] = 3497,
  [SMALL_STATE(180)] = 3502,
  [SMALL_STATE(181)] = 3509,
  [SMALL_STATE(182)] = 3516,
  [SMALL_STATE(183)] = 3521,
  [SMALL_STATE(184)] = 3526,
  [SMALL_STATE(185)] = 3533,
  [SMALL_STATE(186)] = 3538,
  [SMALL_STATE(187)] = 3545,
  [SMALL_STATE(188)] = 3552,
  [SMALL_STATE(189)] = 3559,
  [SMALL_STATE(190)] = 3566,
  [SMALL_STATE(191)] = 3573,
  [SMALL_STATE(192)] = 3580,
  [SMALL_STATE(193)] = 3585,
  [SMALL_STATE(194)] = 3592,
  [SMALL_STATE(195)] = 3597,
  [SMALL_STATE(196)] = 3604,
  [SMALL_STATE(197)] = 3611,
  [SMALL_STATE(198)] = 3618,
  [SMALL_STATE(199)] = 3625,
  [SMALL_STATE(200)] = 3632,
  [SMALL_STATE(201)] = 3639,
  [SMALL_STATE(202)] = 3646,
  [SMALL_STATE(203)] = 3651,
  [SMALL_STATE(204)] = 3658,
  [SMALL_STATE(205)] = 3665,
  [SMALL_STATE(206)] = 3669,
  [SMALL_STATE(207)] = 3673,
  [SMALL_STATE(208)] = 3677,
  [SMALL_STATE(209)] = 3681,
  [SMALL_STATE(210)] = 3685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(187),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(209),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(173),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(172),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(136),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(178),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(147),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(188),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 18),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 18),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 12),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 12),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 20),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 20),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 7),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 15),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 15),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(167),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(201),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 6),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(176),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(66),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(99),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(109),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 10),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(132),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(118),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(127),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(160),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(129),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(143),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1, .production_id = 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 8),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
