#include <iostream>

// Regular inline function
inline int multiply(int a, int b) {
    return a * b;
}

// Static inline function
inline static int staticMultiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "multiply(3, 4): " << multiply(3, 4) << std::endl; // Output: 12
    std::cout << "staticMultiply(5, 6): " << staticMultiply(5, 6) << std::endl; // Output: 30
    return 0;
}
