#include <iostream>

constexpr int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    constexpr int fib10 = fibonacci(10);
    std::cout << "Fibonacci(10): " << fib10 << std::endl; // Output: 55
    return 0;
}
