#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

constexpr int fact5 = factorial(5);

int main() {
    std::cout << "Factorial of 5: " << fact5 << '\n';
    return 0;
}
