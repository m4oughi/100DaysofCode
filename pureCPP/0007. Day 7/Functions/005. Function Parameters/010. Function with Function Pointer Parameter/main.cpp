#include <iostream>

// Function declaration with function pointer parameter
void operate(int a, int b, int (*func)(int, int));

// Functions for addition and multiplication
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    operate(3, 4, add);       // Pass function pointer for addition
    operate(3, 4, multiply);  // Pass function pointer for multiplication
    return 0;
}

// Function definition with function pointer parameter
void operate(int a, int b, int (*func)(int, int)) {
    std::cout << "Result: " << func(a, b) << std::endl;
}
