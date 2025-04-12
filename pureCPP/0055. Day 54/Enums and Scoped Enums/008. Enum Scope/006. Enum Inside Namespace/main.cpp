#include <iostream>

namespace Network {
    enum class ConnectionType { WiFi, Ethernet, LTE };
}

int main() {
    Network::ConnectionType type = Network::ConnectionType::WiFi;
    std::cout << "Network connection set.\n";
}
