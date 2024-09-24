#include <iostream>

// Macro for dividing two numbers (no error handling)
#define DIVIDE_MACRO(a, b) ((a) / (b))

// Inline function for dividing two numbers with error handling
inline int divideInline(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

int main() {
    int a = 10, b = 0;
    std::cout << "Macro DIVIDE_MACRO(a, b): " << DIVIDE_MACRO(a, b) << std::endl; // Undefined behavior: Division by zero
    std::cout << "Inline divideInline(a, b): " << divideInline(a, b) << std::endl; // Error message: Division by zero
    return 0;
}
