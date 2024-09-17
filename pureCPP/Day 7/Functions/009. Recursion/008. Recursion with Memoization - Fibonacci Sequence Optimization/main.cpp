#include <iostream>
#include <vector>

// Recursive Fibonacci with memoization
int fibonacciMemo(int n, std::vector<int>& memo) {
    if (n <= 1)
        return n;

    if (memo[n] == -1)
        memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);

    return memo[n];
}

int main() {
    int n = 10;
    std::vector<int> memo(n + 1, -1);
    std::cout << "Fibonacci of " << n << " is " << fibonacciMemo(n, memo) << std::endl;
    return 0;
}
