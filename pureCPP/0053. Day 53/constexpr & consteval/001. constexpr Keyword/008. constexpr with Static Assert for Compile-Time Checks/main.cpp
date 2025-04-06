#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

int main() {
    static_assert(factorial(5) == 120, "Factorial calculation is incorrect!");
    std::cout << "Factorial(5) is correct!\n";
    return 0;
}
