#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));  // ✅ Allowed
}

int main() {
    constexpr int result = factorial(5);  
    std::cout << "Factorial: " << result << '\n';
    return 0;
}
