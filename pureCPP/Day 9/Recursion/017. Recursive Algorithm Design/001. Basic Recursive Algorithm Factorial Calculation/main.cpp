#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;  // Base case: factorial of 0 is 1
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
