#include <iostream>
#include <array>
#include <cctype>

constexpr std::array<char, 6> toUpperCase(std::array<char, 6> arr) {
    for (char &c : arr) {
        c = std::toupper(c);
    }
    return arr;
}

int main() {
    constexpr std::array<char, 6> upper = toUpperCase({'h', 'e', 'l', 'l', 'o', '\0'});

    for (char c : upper)
        std::cout << c;

    std::cout << '\n';
}
