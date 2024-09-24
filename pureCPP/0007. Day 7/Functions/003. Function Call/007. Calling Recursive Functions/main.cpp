#include <iostream>

// Function declaration
int factorial(int n);

int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl;  // Recursive call
    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);  // Recursive call inside function
}
