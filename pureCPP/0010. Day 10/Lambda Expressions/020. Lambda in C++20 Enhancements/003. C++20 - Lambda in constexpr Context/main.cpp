#include <iostream>

constexpr auto factorial = [](int n) constexpr {
    int result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
};

int main() {
    constexpr int fact5 = factorial(5); // Compile-time computation

    std::cout << "Factorial of 5: " << fact5 << std::endl; // Outputs: 120
    return 0;
}
