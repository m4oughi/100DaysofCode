#include <iostream>

// Macro to calculate the average (issues with parentheses)
#define AVERAGE_MACRO(a, b) ((a + b) / 2)

// Inline function to calculate the average
inline double averageInline(double a, double b) {
    return (a + b) / 2.0;
}

int main() {
    std::cout << "Macro AVERAGE_MACRO(3, 5): " << AVERAGE_MACRO(3, 5) << std::endl; // Output: 4
    std::cout << "Inline averageInline(3.0, 5.0): " << averageInline(3.0, 5.0) << std::endl; // Output: 4.0

    std::cout << "Macro AVERAGE_MACRO(3 + 2, 5 + 1): " << AVERAGE_MACRO(3 + 2, 5 + 1) << std::endl; // Output: 5 (Incorrect)
    std::cout << "Inline averageInline(3.0 + 2.0, 5.0 + 1.0): " << averageInline(3.0 + 2.0, 5.0 + 1.0) << std::endl; // Output: 5.0 (Correct)

    return 0;
}
