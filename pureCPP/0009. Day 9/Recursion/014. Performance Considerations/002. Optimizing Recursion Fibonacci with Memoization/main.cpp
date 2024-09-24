#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int>& memo) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];  // Use precomputed result
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 30;
    vector<int> memo(n + 1, -1);
    cout << "Fibonacci of " << n << " is " << fibonacci(n, memo) << endl;
    return 0;
}
