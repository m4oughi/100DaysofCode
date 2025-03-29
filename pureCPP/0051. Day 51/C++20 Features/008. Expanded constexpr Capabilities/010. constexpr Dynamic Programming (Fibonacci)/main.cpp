#include <iostream>
#include <array>

constexpr int fibonacci(int n, std::array<int, 100>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

constexpr int computeFib(int n) {
    std::array<int, 100> dp{};
    dp.fill(-1);
    return fibonacci(n, dp);
}

int main() {
    constexpr int fib10 = computeFib(10);
    std::cout << "10th Fibonacci number: " << fib10 << "\n";
}
