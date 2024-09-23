#include <iostream>
#include <unordered_map>
#include <functional>

int main() {
    std::unordered_map<int, int> memo;

    std::function<int(int)> fibonacci = [&](int n) -> int {
        if (n <= 1) return n;
        if (memo.find(n) != memo.end()) return memo[n];
        memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
    };

    std::cout << "Fibonacci of 10: " << fibonacci(10) << std::endl; // Outputs: 55
    return 0;
}
