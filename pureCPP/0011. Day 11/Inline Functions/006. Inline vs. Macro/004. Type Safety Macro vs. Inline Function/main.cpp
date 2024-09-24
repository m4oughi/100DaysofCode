#include <iostream>

// Macro to calculate the product of two values (no type safety)
#define PRODUCT_MACRO(a, b) ((a) * (b))

// Inline function to calculate the product of two values (type safety)
inline int productInline(int a, int b) {
    return a * b;
}

int main() {
    double x = 2.5, y = 4.0;
    std::cout << "Macro PRODUCT_MACRO(x, y): " << PRODUCT_MACRO(x, y) << std::endl; // Output: 10 (No type safety)
    std::cout << "Inline productInline(x, y): " << productInline(x, y) << std::endl; // Type mismatch: may cause error
    return 0;
}
