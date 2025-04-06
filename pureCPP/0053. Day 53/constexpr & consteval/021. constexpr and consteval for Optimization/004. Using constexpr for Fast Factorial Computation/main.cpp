#include <iostream>

// Compile-time factorial computation
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int fact5 = factorial(5);  // Computed at compile-time
    std::cout << "Factorial of 5: " << fact5 << '\n';
}
