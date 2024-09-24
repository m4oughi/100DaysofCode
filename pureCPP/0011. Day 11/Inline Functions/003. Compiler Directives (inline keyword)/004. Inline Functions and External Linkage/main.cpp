#include <iostream>

// Inline function with external linkage
inline int multiply(int a, int b); // Declaration

// Definition with external linkage
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "Product: " << multiply(5, 6) << std::endl; // Output: Product: 30
    return 0;
}
