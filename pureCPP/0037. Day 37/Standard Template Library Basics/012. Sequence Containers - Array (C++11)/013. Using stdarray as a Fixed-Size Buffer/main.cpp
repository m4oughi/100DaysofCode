#include <iostream>
#include <array>

int main() {
    std::array<char, 5> buffer = {'H', 'e', 'l', 'l', 'o'};

    for (char c : buffer) {
        std::cout << c;
    }
    std::cout << "\n";
    return 0;
}
