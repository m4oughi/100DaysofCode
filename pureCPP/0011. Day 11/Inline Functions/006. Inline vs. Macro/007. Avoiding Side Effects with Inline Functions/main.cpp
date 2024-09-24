#include <iostream>

// Macro with side effects (modifies the argument)
#define DOUBLE_MACRO(x) ((x) + (x))

// Inline function to double a number (no side effects)
inline int doubleInline(int x) {
    return x + x;
}

int main() {
    int a = 3;
    std::cout << "Macro DOUBLE_MACRO(++a): " << DOUBLE_MACRO(++a) << std::endl; // Undefined behavior: 8
    a = 3;
    std::cout << "Inline doubleInline(++a): " << doubleInline(++a) << std::endl; // Correct: 8
    return 0;
}
