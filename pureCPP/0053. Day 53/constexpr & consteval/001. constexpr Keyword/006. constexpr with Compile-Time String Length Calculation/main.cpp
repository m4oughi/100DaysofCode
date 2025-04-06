#include <iostream>

constexpr std::size_t string_length(const char* str) {
    return *str ? 1 + string_length(str + 1) : 0;
}

int main() {
    constexpr std::size_t len = string_length("Hello");
    std::cout << "Length of \"Hello\": " << len << '\n';
    return 0;
}
