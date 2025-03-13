#include <iostream>

constexpr int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    constexpr int fact5 = factorial(5);
    std::cout << "Factorial of 5: " << fact5 << std::endl; // Output: 120
    return 0;
}
