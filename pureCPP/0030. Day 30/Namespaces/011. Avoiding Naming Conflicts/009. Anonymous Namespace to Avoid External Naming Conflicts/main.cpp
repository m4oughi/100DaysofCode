#include <iostream>

namespace {
    void logMessage() {
        std::cout << "Logging message in anonymous namespace" << std::endl;
    }
}

void logMessage() {
    std::cout << "Logging message in global scope" << std::endl;
}

int main() {
    logMessage();  // Calls anonymous namespace version
    return 0;
}
