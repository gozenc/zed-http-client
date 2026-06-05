import test from "node:test";
import assert from "node:assert/strict";

import { parseDotenv, parseDotenvValue } from "./zed-rest-client.mjs";

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
