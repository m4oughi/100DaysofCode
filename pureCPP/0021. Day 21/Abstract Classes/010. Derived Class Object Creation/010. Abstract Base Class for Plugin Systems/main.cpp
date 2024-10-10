#include <iostream>
#include <vector>
using namespace std;

// Abstract Base Class
class Plugin {
public:
    virtual void execute() = 0;  // Pure virtual function
};

class AudioPlugin : public Plugin {
public:
    void execute() override {
        cout << "Executing Audio Plugin" << endl;
    }
};

class VideoPlugin : public Plugin {
public:
    void execute() override {
        cout << "Executing Video Plugin" << endl;
    }
};

class PluginManager {
private:
    vector<Plugin*> plugins;
public:
    void loadPlugin(Plugin* plugin) {
        plugins.push_back(plugin);
    }

    void executeAll() {
        for (Plugin* plugin : plugins) {
            plugin->execute();
        }
    }

    ~PluginManager() {
        for (Plugin* plugin : plugins) {
            delete plugin;
        }
    }
};

int main() {
    PluginManager manager;

    manager.loadPlugin(new AudioPlugin());
    manager.loadPlugin(new VideoPlugin());

    manager.executeAll();  // Outputs "Executing Audio Plugin" and "Executing Video Plugin"

    return 0;
}
