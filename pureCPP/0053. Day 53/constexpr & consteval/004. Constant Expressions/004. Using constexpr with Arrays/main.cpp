#include <iostream>
#include <array>

constexpr std::array<int, 5> generateSquares() {
    return {1, 4, 9, 16, 25};
}

int main() {
    constexpr auto squares = generateSquares();

    for (int val : squares) {
        std::cout << val << " ";
    }
    std::cout << '\n';

    return 0;
}
