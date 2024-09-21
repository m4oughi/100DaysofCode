#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Multiple recursive calls
}

int main() {
    int n = 5;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
