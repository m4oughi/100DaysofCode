#include <iostream>

// Inline constexpr function for compile-time computation
inline constexpr int squareConst(int x) {
    return x * x;
}

int main() {
    constexpr int result = squareConst(5); // Computed at compile-time
    std::cout << "Square of 5 (const): " << result << std::endl; // Output: Square of 5 (const): 25
    return 0;
}
