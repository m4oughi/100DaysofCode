#include <iostream>
#include <array>

constexpr std::array<int, 5> generateSquares() {
    return {0 * 0, 1 * 1, 2 * 2, 3 * 3, 4 * 4};
}

int main() {
    constexpr std::array<int, 5> squares = generateSquares();

    for (int num : squares)
        std::cout << num << " ";

    std::cout << '\n';
}
