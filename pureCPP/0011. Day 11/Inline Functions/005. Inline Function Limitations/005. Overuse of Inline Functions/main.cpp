#include <iostream>

// Multiple inline functions
inline int increment(int x) { return x + 1; }
inline int square(int x) { return x * x; }
inline int multiply(int x, int y) { return x * y; }

int main() {
    int a = 2, b = 3;
    std::cout << "Increment: " << increment(a) << std::endl; // Output: 3
    std::cout << "Square: " << square(a) << std::endl;       // Output: 4
    std::cout << "Multiply: " << multiply(a, b) << std::endl; // Output: 6
    return 0;
}
