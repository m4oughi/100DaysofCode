#include <iostream>

consteval int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int result = factorial(5);  // ✅ Computed at compile-time
    std::cout << "Factorial: " << result << '\n';
}
