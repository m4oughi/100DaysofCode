#include <iostream>

// Function declarations
int add(int a, int b);
double add(double a, double b);

int main() {
    std::cout << add(3, 4) << std::endl;           // Calls int version
    std::cout << add(2.5, 3.5) << std::endl;       // Calls double version
    return 0;
}

// Overloaded function definitions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
