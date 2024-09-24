#include <iostream>

// Inline function
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*funcPtr)(int, int) = multiply; // Function pointer to inline function
    std::cout << "Product of 3 and 4: " << funcPtr(3, 4) << std::endl; // Output: 12
    return 0;
}
