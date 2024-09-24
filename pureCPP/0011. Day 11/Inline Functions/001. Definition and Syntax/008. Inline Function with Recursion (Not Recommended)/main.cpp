#include <iostream>

// Inline function to calculate factorial using recursion
inline int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: Factorial of 5: 120
    return 0;
}
