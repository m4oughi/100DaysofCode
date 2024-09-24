#include <iostream>

// Inline function with recursion
inline int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1); // Only a few levels of inlining can be done
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: 120
    return 0;
}
