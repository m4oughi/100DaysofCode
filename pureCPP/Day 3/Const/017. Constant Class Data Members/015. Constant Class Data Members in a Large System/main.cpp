#include <iostream>

class Config {
public:
    static const int maxConnections = 100;
    static const int timeoutSeconds = 30;
};

class Service {
public:
    void printConfig() const {
        std::cout << "Max Connections: " << Config::maxConnections << std::endl; // Prints 100
        std::cout << "Timeout Seconds: " << Config::timeoutSeconds << std::endl; // Prints 30
    }
};

int main() {
    Service service;
    service.printConfig();
}
