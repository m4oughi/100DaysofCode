#include <iostream>

// Inline function for calculating factorial
inline int factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: 120
    return 0;
}
