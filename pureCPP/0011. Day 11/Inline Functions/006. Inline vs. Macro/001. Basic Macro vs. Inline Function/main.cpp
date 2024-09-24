#include <iostream>

// Macro for square of a number
#define SQUARE_MACRO(x) ((x) * (x))

// Inline function for square of a number
inline int squareInline(int x) {
    return x * x;
}

int main() {
    std::cout << "Macro SQUARE_MACRO(5): " << SQUARE_MACRO(5) << std::endl; // Output: 25
    std::cout << "Inline squareInline(5): " << squareInline(5) << std::endl; // Output: 25
    return 0;
}
