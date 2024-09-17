#include <iostream>

// Functions to be used
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // Array of function pointers
    int (*operations[])(int, int) = { add, subtract, multiply };
    
    int a = 10, b = 5;
    
    std::cout << "Addition: " << operations[0](a, b) << std::endl;
    std::cout << "Subtraction: " << operations[1](a, b) << std::endl;
    std::cout << "Multiplication: " << operations[2](a, b) << std::endl;
    
    return 0;
}
