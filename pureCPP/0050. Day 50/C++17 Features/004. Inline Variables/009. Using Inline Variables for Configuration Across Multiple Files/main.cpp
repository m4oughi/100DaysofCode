#include <iostream>
#include "config.h"

int main() {
    std::cout << "Max Connections: " << Config::maxConnections << '\n';
    Config::maxConnections = 10;
    std::cout << "Updated Max Connections: " << Config::maxConnections << '\n';
    return 0;
}