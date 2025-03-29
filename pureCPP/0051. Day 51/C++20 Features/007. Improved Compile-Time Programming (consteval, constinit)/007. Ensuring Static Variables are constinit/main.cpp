#include <iostream>

struct Logger {
    consteval static const char* getLogPrefix() {
        return "LOG: ";
    }
};

constinit const char* logPrefix = Logger::getLogPrefix(); // Ensured at compile-time

int main() {
    std::cout << logPrefix << "Application started.\n";
}
