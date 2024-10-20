#include <iostream>

namespace Config {
    int maxConnections = 100;

    void displayConfig() {
        std::cout << "Max Connections: " << maxConnections << std::endl;
    }
}

int main() {
    Config::displayConfig();  // Accessing variable and function in the namespace block
    return 0;
}
