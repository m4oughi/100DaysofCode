#include <iostream>

// Function declaration returning a function pointer
int (*getOperation(char op))(int, int);

// Functions for addition and subtraction
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    int (*operation)(int, int);  // Declare function pointer
    operation = getOperation('+');  // Get addition function
    std::cout << "Result: " << operation(3, 4) << std::endl;  // Function call
    return 0;
}

// Function definition returning a function pointer
int (*getOperation(char op))(int, int) {
    if (op == '+')
        return add;  // Returns pointer to add function
    else
        return subtract;  // Returns pointer to subtract function
}
