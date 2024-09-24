#include <iostream>
#include <string_view>

constexpr std::string_view getSubstring(std::string_view str, size_t start, size_t length) {
    return str.substr(start, length);
}

int main() {
    constexpr std::string_view str = "Hello, constexpr!";
    constexpr std::string_view result = getSubstring(str, 7, 9); // Compile-time string manipulation
    std::cout << result << std::endl; // Prints "constexpr"
}