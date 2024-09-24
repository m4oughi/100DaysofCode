#include <iostream>

// Macro to calculate the maximum of two numbers (difficult to debug)
#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))

// Inline function to calculate the maximum of two numbers (easy to debug)
inline int maxInline(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Macro MAX_MACRO(a, b): " << MAX_MACRO(a, b) << std::endl; // Output: 10
    std::cout << "Inline maxInline(a, b): " << maxInline(a, b) << std::endl; // Output: 10
    return 0;
}
