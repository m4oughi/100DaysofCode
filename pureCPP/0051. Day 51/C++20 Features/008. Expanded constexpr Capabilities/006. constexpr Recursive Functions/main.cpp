#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int fact_5 = factorial(5);
    std::cout << "Factorial of 5: " << fact_5 << "\n";
}
