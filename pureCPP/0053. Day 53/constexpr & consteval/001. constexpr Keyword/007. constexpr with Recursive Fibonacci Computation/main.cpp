#include <iostream>

constexpr int fibonacci(int n) {
    return (n <= 1) ? n : (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    constexpr int fib10 = fibonacci(10);
    std::cout << "10th Fibonacci number: " << fib10 << '\n';
    return 0;
}
