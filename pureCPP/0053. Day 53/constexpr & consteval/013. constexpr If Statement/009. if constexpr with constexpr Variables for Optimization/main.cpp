#include <iostream>

constexpr bool isDebug = false;  // Change to true to enable debug mode

void log(const char* message) {
    if constexpr (isDebug) {
        std::cout << "[DEBUG]: " << message << '\n';
    }
}

int main() {
    log("This message will only appear in debug mode.");
}
