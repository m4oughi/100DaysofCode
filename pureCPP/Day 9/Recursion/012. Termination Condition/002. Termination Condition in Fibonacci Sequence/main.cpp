#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)  // Termination condition
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
}

int main() {
    int n = 6;  // Example: Calculate Fibonacci(6)
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
