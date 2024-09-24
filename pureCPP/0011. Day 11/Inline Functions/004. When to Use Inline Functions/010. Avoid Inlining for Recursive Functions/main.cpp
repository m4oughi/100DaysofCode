#include <iostream>

// Recursive inline function (not recommended)
inline int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: Factorial of 5: 120
    return 0;
}
