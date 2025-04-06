#include <iostream>
#include <array>

constexpr auto reverseString(const char* str, std::size_t len) {
    std::array<char, 100> reversed = {};
    for (std::size_t i = 0; i < len; ++i) {
        reversed[i] = str[len - 1 - i];
    }
    return reversed;
}

constexpr std::size_t strLen(const char* str) {
    return *str ? 1 + strLen(str + 1) : 0;
}

int main() {
    constexpr auto reversed = reverseString("Compile", strLen("Compile"));
    
    for (char c : reversed) {
        if (c == '\0') break;
        std::cout << c;
    }
    std::cout << '\n';

    return 0;
}
