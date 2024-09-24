#include <iostream>

// Overloaded functions with default parameters
void printValue(int a, int b = 10) {
    std::cout << "Two integers: " << a << " and " << b << std::endl;
}

void printValue(double a) {
    std::cout << "Double value: " << a << std::endl;
}

int main() {
    printValue(5);               // Calls printValue(int, int) with default b
    printValue(3.14);            // Calls printValue(double)
    return 0;
}
