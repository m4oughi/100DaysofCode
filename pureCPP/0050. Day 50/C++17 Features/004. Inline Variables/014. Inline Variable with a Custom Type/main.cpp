#include <iostream>

struct Config {
    struct Settings {
        int maxThreads = 4;
    };

    static inline Settings settings;
};

int main() {
    std::cout << "Max Threads: " << Config::settings.maxThreads << '\n';
    Config::settings.maxThreads = 8;
    std::cout << "Updated Max Threads: " << Config::settings.maxThreads << '\n';
    return 0;
}
