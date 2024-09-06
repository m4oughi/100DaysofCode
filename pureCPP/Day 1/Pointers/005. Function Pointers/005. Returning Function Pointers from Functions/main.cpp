#include <iostream>

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

// Function returning a function pointer
int (*getOperation(char op))(int, int) {
    if (op == '+')
        return add;
    else
        return subtract;
}

int main() {
    char op = '+';
    int (*operation)(int, int) = getOperation(op);  // Get the function pointer

    int result = operation(10, 5);
    std::cout << "Result: " << result << std::endl;  // Output: Result: 15

    return 0;
}
