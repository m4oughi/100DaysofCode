#include <iostream>

// Function declarations (prototypes)
int multiply(int a, int b);
double multiply(double a, double b);

int main() {
    std::cout << multiply(2, 3) << std::endl;          // Calls int version
    std::cout << multiply(2.5, 3.2) << std::endl;      // Calls double version
    return 0;
}

// Function definitions
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}
