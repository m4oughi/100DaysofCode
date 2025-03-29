#include <iostream>
#include <format>

int main() {
    std::string formatted = std::format("{} + {} = {}", 10, 5, 10 + 5);
    std::cout << formatted << "\n";

    return 0;
}
