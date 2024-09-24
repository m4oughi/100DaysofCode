#include <iostream>

// Inline function to calculate the nth Fibonacci number
inline int fibonacci(int n) {
    if (n <= 1) return n; // Base cases: 0 and 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    std::cout << "Fibonacci of 6: " << fibonacci(6) << std::endl; // Output: 8
    return 0;
}
