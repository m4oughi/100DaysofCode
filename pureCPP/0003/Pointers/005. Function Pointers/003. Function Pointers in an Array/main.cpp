#include <iostream>

// Three simple mathematical operations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // Array of function pointers
    int (*operations[3])(int, int) = {add, subtract, multiply};

    int x = 5, y = 3;
    
    // Using function pointers in a loop
    for (int i = 0; i < 3; ++i) {
        std::cout << "Result: " << operations[i](x, y) << std::endl;
    }

    return 0;
}
