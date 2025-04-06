#include <iostream>
#include <array>

constexpr std::array<int, 5> squares = {1, 4, 9, 16, 25};

int main() {
    for (int val : squares) {
        std::cout << val << " ";
    }
    std::cout << '\n';
    return 0;
}
