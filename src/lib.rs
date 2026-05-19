use zed_extension_api as zed;

struct RestClientExtension;

impl zed::Extension for RestClientExtension {
    fn new() -> Self {
        Self
    }
}

zed::register_extension!(RestClientExtension);
