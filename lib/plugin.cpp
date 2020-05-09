#include "plugin.h"

void PluginRegistry::register_plugin(std::string name, Plugin* plugin) {
	get_plugin_map().emplace(std::move(name), plugin);
}


std::map<std::string, Plugin*> const& PluginRegistry::get_plugins() {
	return get_plugin_map();
}

std::map<std::string, Plugin*>& PluginRegistry::get_plugin_map() {
	static std::map<std::string, Plugin*> plugin_map{};
	return plugin_map;
}

