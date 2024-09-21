#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)  // Base case
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n = 6;  // Example: Calculate Fibonacci(6)
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
