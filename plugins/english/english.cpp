#include <plugin.h>
#include <talker.h>

struct EnglishPlugin : public Plugin {
	EnglishPlugin() {
		PluginRegistry::register_plugin("English", this);
	}

	void say_hello() override {
		talk("Hello, world!");
	}
} register_plugin;

