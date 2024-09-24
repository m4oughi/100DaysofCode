#include <iostream>
using namespace std;

int fibonacciIterative(int n) {
    if (n <= 1)
        return n;
    int prev2 = 0, prev1 = 1, current;
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    int n = 30;
    cout << "Fibonacci of " << n << " is " << fibonacciIterative(n) << endl;
    return 0;
}
