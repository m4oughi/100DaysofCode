#include <iostream>

namespace {
    void logMessage() {
        std::cout << "Logging message (anonymous namespace)" << std::endl;
    }
}

int main() {
    logMessage();  // Accessible within the file due to the anonymous namespace
    return 0;
}
