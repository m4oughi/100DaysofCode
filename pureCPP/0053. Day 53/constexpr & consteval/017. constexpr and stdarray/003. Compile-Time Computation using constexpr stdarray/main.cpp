#include <iostream>
#include <array>

constexpr std::array<int, 5> generateSquares() {
    return {1 * 1, 2 * 2, 3 * 3, 4 * 4, 5 * 5};
}

int main() {
    constexpr auto squares = generateSquares();

    for (int num : squares)
        std::cout << num << " ";

    std::cout << '\n';
}
