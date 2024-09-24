#include <iostream>

// Static inline function for compile-time evaluation
static inline constexpr int square(int x) {
    return x * x;
}

int main() {
    const int result = square(4); // Compiler can optimize this to 16 at compile time
    std::cout << "Square of 4: " << result << std::endl; // Output: 16
    return 0;
}
