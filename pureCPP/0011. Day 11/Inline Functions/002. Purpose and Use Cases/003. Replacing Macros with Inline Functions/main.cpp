#include <iostream>

// Using inline function instead of macro for a safer square calculation
#define SQUARE(x) ((x) * (x)) // Problematic due to multiple evaluations
inline int square(int x) {
    return x * x;
}

int main() {
    std::cout << "Macro SQUARE(5+1): " << SQUARE(5+1) << std::endl; // Incorrect Output: 36
    std::cout << "Inline square(5+1): " << square(5+1) << std::endl; // Correct Output: 36
    return 0;
}
