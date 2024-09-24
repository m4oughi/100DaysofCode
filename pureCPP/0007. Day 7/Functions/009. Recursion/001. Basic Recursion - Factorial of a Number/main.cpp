#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl;
    return 0;
}
