#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);  // Recursive call with one decrement
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
