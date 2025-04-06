#include <iostream>

consteval int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

int main() {
    constexpr int fact5 = factorial(5); // Must be evaluated at compile-time
    std::cout << "Factorial of 5: " << fact5 << '\n';
    return 0;
}
