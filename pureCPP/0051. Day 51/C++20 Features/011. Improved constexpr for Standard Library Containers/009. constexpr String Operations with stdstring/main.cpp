#include <string>
#include <iostream>

constexpr std::string concat(const std::string& a, const std::string& b) {
    return a + b;
}

int main() {
    constexpr std::string message = concat("Hello, ", "constexpr!");
    std::cout << message << "\n";
}
