#include <iostream>
#include <format>
#include <string>

int main() {
    std::string buffer(15, '\0');
    auto result = std::format_to_n(buffer.begin(), buffer.size(), "Hello, {}!", "World");

    std::cout << "Formatted: " << buffer << "\n";
    std::cout << "Characters written: " << result.out - buffer.begin() << "\n";

    return 0;
}
