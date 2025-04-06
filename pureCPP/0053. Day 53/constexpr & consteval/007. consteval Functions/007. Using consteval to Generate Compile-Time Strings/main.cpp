#include <iostream>

consteval std::size_t string_length(const char* str) {
    return (*str == '\0') ? 0 : 1 + string_length(str + 1);
}

int main() {
    constexpr std::size_t len = string_length("Hello, World!");
    std::cout << "String length: " << len << '\n';
    return 0;
}
