#include <iostream>
#include <vector>
using namespace std;

vector<int> memo;

int factorial(int n) {
    if (n <= 1)
        return 1;

    if (memo[n] != -1)  // Check if value is already computed
        return memo[n];

    memo[n] = n * factorial(n - 1);  // Store result
    return memo[n];
}

int main() {
    int n = 5;  // Example: Calculate factorial(5)
    memo.resize(n + 1, -1);  // Initialize memoization table
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    return 0;
}
