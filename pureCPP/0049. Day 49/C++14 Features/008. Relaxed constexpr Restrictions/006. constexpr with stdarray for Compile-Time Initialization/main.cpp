#include <iostream>
#include <array>

constexpr int square(int x) {
    return x * x;
}

constexpr std::array<int, 5> generateSquares() {
    return {square(1), square(2), square(3), square(4), square(5)};
}

int main() {
    constexpr std::array<int, 5> squares = generateSquares();
    for (int i : squares) {
        std::cout << i << " "; // Output: 1 4 9 16 25
    }
    std::cout << std::endl;
    return 0;
}
