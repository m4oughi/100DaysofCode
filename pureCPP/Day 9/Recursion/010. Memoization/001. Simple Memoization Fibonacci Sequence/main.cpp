#include <iostream>
#include <vector>
using namespace std;

vector<int> memo;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    if (memo[n] != -1)  // Check if value is already computed
        return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);  // Store result
    return memo[n];
}

int main() {
    int n = 10;  // Example: Calculate Fibonacci(10)
    memo.resize(n + 1, -1);  // Initialize memoization table
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
