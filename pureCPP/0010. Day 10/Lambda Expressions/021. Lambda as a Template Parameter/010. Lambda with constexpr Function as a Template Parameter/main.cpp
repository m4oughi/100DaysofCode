#include <iostream>

// Constexpr function template accepting a lambda
template <typename Func>
constexpr auto execute(Func f, int n) {
    return f(n);
}

int main() {
    // Constexpr lambda
    constexpr auto factorial = [](int n) constexpr {
        int result = 1;
        for (int i = 1; i <= n; ++i) result *= i;
        return result;
    };

    // Compile-time evaluation using a constexpr function and lambda
    constexpr int fact5 = execute(factorial, 5);
    std::cout << "Factorial of 5: " << fact5 << std::endl; // Outputs: Factorial of 5: 120

    return 0;
}
