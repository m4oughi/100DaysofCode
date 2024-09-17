#include <iostream>

// Function declaration with double return type
double multiply(double a, double b);

int main() {
    double result = multiply(2.5, 4.2);  // Function call, store returned value
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition with double return type
double multiply(double a, double b) {
    return a * b;  // Returns the product of two doubles
}
