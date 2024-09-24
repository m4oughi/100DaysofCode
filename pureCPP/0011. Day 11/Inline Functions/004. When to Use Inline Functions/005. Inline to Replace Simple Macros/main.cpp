#include <iostream>

// Inline function to replace a problematic macro
#define SQUARE(x) ((x) * (x)) // Macro with potential issues due to multiple evaluations
inline int square(int x) {
    return x * x;
}

int main() {
    std::cout << "Macro SQUARE(5+1): " << SQUARE(5 + 1) << std::endl; // Incorrect: 36
    std::cout << "Inline square(5+1): " << square(5 + 1) << std::endl; // Correct: 36
    return 0;
}
