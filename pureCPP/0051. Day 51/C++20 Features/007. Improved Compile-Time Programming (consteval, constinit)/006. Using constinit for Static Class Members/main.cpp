#include <iostream>

struct Config {
    static constinit int maxConnections;
};

constinit int Config::maxConnections = 100; // Must be initialized at compile-time

int main() {
    std::cout << "Max connections: " << Config::maxConnections << "\n";
}
