#include <plugin.h>
#include <iostream>
#include <dlfcn.h>

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; ++i) {
		if (dlopen(argv[i], RTLD_LAZY) == nullptr) {
			std::cerr << "Failed to load plugin " << argv[i] << std::endl;
			std::cerr << dlerror() << std::endl;
			return 1;
		}
	}

	for (const auto& pl : PluginRegistry::get_plugins()) {
		const std::string &name = pl.first;
		const auto &plugin = pl.second;

		std::cout << "Plugin " << name << " says ";
		plugin->say_hello();
	}

	std::cout << std::flush;
}
