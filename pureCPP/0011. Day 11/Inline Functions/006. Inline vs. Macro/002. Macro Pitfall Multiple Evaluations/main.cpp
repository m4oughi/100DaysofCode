#include <iostream>

// Macro for square of a number with potential multiple evaluation issue
#define SQUARE_MACRO(x) ((x) * (x))

// Inline function for square of a number (no side effects)
inline int squareInline(int x) {
    return x * x;
}

int main() {
    int a = 3;
    std::cout << "Macro SQUARE_MACRO(++a): " << SQUARE_MACRO(++a) << std::endl; // Undefined behavior: 20
    a = 3;
    std::cout << "Inline squareInline(++a): " << squareInline(++a) << std::endl; // Correct: 16
    return 0;
}
