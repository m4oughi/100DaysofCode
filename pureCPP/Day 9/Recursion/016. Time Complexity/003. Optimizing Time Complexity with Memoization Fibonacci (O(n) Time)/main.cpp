#include <iostream>
#include <vector>
using namespace std;

int fibonacciMemo(int n, vector<int>& memo) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 5;
    vector<int> memo(n + 1, -1);
    cout << "Fibonacci of " << n << " is " << fibonacciMemo(n, memo) << endl;
    return 0;
}
