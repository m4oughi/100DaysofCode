#include <iostream>
#include <array>

constexpr std::array<char, 6> toUppercase(const char* str) {
    return { str[0] - 32, str[1] - 32, str[2] - 32, str[3] - 32, str[4] - 32, '\0' };
}

int main() {
    constexpr auto result = toUppercase("hello");  // ✅ Compile-time transformation
    std::cout << result.data() << '\n';  // Prints: HELLO
}
