#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)  // Base case
        return 1;
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int n = 5;  // Example: Calculate factorial(5)
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    return 0;
}
