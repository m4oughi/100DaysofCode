#include <iostream>

constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

consteval int constFibonacci(int n) {
    return (n <= 1) ? n : constFibonacci(n - 1) + constFibonacci(n - 2);
}

int main() {
    constexpr int compileTimeFibo = fibonacci(10);  // Compile-time evaluation
    std::cout << "Compile-Time Fibonacci(10): " << compileTimeFibo << '\n';

    int n;
    std::cin >> n;
    int runtimeFibo = fibonacci(n);  // Runtime evaluation
    std::cout << "Runtime Fibonacci(" << n << "): " << runtimeFibo << '\n';

    // int runtimeConstFibo = constFibonacci(n);  // ❌ Compilation error!
}
