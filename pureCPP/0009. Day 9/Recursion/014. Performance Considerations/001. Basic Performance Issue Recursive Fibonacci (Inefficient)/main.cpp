#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Multiple redundant calculations
}

int main() {
    int n = 30;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
