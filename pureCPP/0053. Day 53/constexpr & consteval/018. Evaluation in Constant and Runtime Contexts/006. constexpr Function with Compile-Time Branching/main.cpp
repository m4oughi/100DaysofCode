#include <iostream>

constexpr int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    constexpr int fact5 = factorial(5);  // Compile-time evaluation
    std::cout << "Factorial(5): " << fact5 << '\n';

    int n;
    std::cin >> n;
    int runtimeFact = factorial(n);  // Runtime evaluation
    std::cout << "Factorial(" << n << "): " << runtimeFact << '\n';
}
