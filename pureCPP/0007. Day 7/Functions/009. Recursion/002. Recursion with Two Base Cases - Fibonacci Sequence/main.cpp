#include <iostream>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1)  // Base cases
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    std::cout << "Fibonacci of 6: " << fibonacci(6) << std::endl;
    return 0;
}
