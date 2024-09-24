#include <iostream>
using namespace std;

int factorialTailRec(int n, int result = 1) {
    if (n == 1)
        return result;
    return factorialTailRec(n - 1, result * n);  // Tail recursive call
}

int main() {
    int n = 10;
    cout << "Factorial of " << n << " is " << factorialTailRec(n) << endl;
    return 0;
}
