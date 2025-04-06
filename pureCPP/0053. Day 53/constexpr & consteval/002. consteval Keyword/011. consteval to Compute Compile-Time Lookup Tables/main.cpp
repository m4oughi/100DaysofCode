#include <iostream>
#include <array>

consteval std::array<int, 5> generateTable() {
    return {1, 4, 9, 16, 25}; // Precomputed squares
}

int main() {
    constexpr auto table = generateTable();
    
    for (int val : table) {
        std::cout << val << " ";
    }
    std::cout << '\n';

    return 0;
}
