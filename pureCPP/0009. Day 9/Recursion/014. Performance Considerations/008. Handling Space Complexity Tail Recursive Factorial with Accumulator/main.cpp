#include <iostream>
using namespace std;

int factorialTailRec(int n, int acc = 1) {
    if (n == 0)
        return acc;
    return factorialTailRec(n - 1, acc * n);  // Tail call, space complexity is constant
}

int main() {
    int n = 10;
    cout << "Factorial of " << n << " is " << factorialTailRec(n) << endl;
    return 0;
}
