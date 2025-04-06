#include <iostream>
#include <array>

constexpr std::array<int, 5> generateSquares() {
    return {1, 4, 9, 16, 25};
}

int main() {
    constexpr auto squares = generateSquares();
    
    for (int value : squares) {
        std::cout << value << " ";
    }
    std::cout << '\n';

    return 0;
}
