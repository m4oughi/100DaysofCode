#include <iostream>
#include <array>

// Precomputed square values
constexpr std::array<int, 6> precomputedSquares = {0, 1, 4, 9, 16, 25};

constexpr int fastSquare(int x) {
    return precomputedSquares[x];  // Lookup instead of computation
}

int main() {
    constexpr int result = fastSquare(4);  // Fast lookup
    std::cout << "Square of 4: " << result << '\n';
}
