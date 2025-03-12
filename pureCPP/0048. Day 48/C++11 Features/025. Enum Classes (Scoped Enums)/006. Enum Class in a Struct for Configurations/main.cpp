#include <iostream>

struct AppConfig {
    enum class Mode { Debug, Release };
    
    static void printMode(Mode mode) {
        std::cout << (mode == Mode::Debug ? "Debug Mode\n" : "Release Mode\n");
    }
};

int main() {
    AppConfig::Mode currentMode = AppConfig::Mode::Debug;
    AppConfig::printMode(currentMode);
    return 0;
}
