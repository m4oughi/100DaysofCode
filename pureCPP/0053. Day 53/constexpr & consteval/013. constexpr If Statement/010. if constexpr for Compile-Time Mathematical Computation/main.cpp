#include <iostream>

constexpr int factorial(int n) {
    if constexpr (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    constexpr int result = factorial(5);
    std::cout << "Factorial: " << result << '\n';  // ✅ Factorial: 120
}
