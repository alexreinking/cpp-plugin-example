#pragma once
#ifndef PLUGIN_H
#define PLUGIN_H

#include <string>
#include <map>

class Plugin {
public:
	virtual ~Plugin() {}
	virtual void say_hello() = 0;
};

class PluginRegistry {
public:
	static void register_plugin(std::string name, Plugin* plugin);
	static std::map<std::string, Plugin*> const& get_plugins();

private:
	static std::map<std::string, Plugin*>& get_plugin_map();
};

#endif

