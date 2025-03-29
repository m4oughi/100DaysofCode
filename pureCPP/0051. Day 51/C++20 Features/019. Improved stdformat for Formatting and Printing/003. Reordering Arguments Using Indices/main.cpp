#include <iostream>
#include <format>

int main() {
    std::string formatted = std::format("{1} {0}!", "World", "Hello");
    std::cout << formatted << "\n";

    return 0;
}
