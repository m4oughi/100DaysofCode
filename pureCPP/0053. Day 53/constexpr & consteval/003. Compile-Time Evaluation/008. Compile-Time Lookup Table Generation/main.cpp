#include <iostream>
#include <array>

consteval std::array<int, 5> generateSquares() {
    return {1, 4, 9, 16, 25};
}

int main() {
    constexpr auto table = generateSquares();
    
    for (int value : table) {
        std::cout << value << " ";
    }
    std::cout << '\n';

    return 0;
}
