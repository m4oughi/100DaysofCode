#include <iostream>

int main() {
    constexpr auto fibonacci = [](int n) constexpr -> int {
        return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
    };

    constexpr int fib5 = fibonacci(5);
    std::cout << "Fibonacci(5) = " << fib5 << '\n';
}
