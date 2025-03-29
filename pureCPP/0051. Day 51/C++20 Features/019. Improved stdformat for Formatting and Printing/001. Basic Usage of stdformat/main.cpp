#include <iostream>
#include <format>

int main() {
    std::string message = std::format("Hello, {}!", "World");
    std::cout << message << "\n";

    return 0;
}
