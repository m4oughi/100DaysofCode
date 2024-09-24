#include <iostream>

// Macro for swapping two numbers (issues with parentheses)
#define SWAP_MACRO(x, y) { int temp = x; x = y; y = temp; }

// Inline function for swapping two numbers (safe)
inline void swapInline(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    SWAP_MACRO(a, b); // Macro issue with complex expressions
    std::cout << "Macro Swap: a = " << a << ", b = " << b << std::endl; // Output: a = 10, b = 5

    a = 5; b = 10;
    swapInline(a, b);
    std::cout << "Inline Swap: a = " << a << ", b = " << b << std::endl; // Output: a = 10, b = 5
    return 0;
}
