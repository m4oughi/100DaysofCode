#include <iostream>

// Inline function with always_inline attribute to force inlining
inline __attribute__((always_inline)) int product(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "Product: " << product(4, 5) << std::endl; // Output: Product: 20
    return 0;
}
