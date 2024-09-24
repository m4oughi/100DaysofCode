#include <iostream>

// Inline constexpr function for compile-time evaluation
inline constexpr int cubeConst(int x) {
    return x * x * x;
}

int main() {
    constexpr int result = cubeConst(3); // Evaluated at compile-time
    std::cout << "Cube of 3 (const): " << result << std::endl; // Output: Cube of 3 (const): 27
    return 0;
}
