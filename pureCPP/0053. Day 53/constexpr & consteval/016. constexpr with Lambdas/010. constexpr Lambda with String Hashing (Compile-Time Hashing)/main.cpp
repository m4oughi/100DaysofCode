#include <iostream>

constexpr auto hashString = [](const char* str) constexpr {
    std::size_t hash = 0;
    while (*str) {
        hash = hash * 31 + *str++;
    }
    return hash;
};

int main() {
    constexpr std::size_t hash = hashString("Hello, World!");
    std::cout << "Hash: " << hash << '\n';
}
