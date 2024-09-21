#include <iostream>
using namespace std;

int factorialTailRec(int n, int acc = 1) {
    if (n == 1)
        return acc;
    return factorialTailRec(n - 1, acc * n);  // No extra stack frame needed
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorialTailRec(n) << endl;
    return 0;
}
