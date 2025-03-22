#include <iostream>
#include "config.h"

int main() {
    std::cout << "Max Connections: " << App::Settings::maxConnections << '\n';
    return 0;
}
