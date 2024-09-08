#include <iostream>

constexpr const char* getGreeting() {
    return "Hello, constexpr!";
}

int main() {
    constexpr const char* greeting = getGreeting();
    std::cout << greeting << std::endl; // Prints "Hello, constexpr!"
}
