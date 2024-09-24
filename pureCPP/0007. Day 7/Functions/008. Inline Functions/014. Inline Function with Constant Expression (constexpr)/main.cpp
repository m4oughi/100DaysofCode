#include <iostream>

constexpr inline int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int result = factorial(5);  // Evaluated at compile time
    std::cout << "Factorial of 5: " << result << std::endl;
    return 0;
}
