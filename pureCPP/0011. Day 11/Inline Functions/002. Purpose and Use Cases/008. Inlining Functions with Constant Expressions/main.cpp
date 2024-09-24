#include <iostream>

// Inline function for compile-time constant expression
inline constexpr int squareConst(int x) {
    return x * x;
}

int main() {
    constexpr int result = squareConst(5); // Calculated at compile-time
    std::cout << "Square of 5 (const): " << result << std::endl; // Output: Square of 5 (const): 25
    return 0;
}
