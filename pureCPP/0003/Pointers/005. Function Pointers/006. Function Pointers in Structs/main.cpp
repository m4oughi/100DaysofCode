#include <iostream>

// Struct with a function pointer as a member
struct Operation {
    int (*operation)(int, int);  // Function pointer as a member
};

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    Operation op;

    op.operation = add;  // Assign the function pointer to 'add'
    std::cout << "Addition: " << op.operation(7, 3) << std::endl;  // Output: Addition: 10

    op.operation = subtract;  // Assign the function pointer to 'subtract'
    std::cout << "Subtraction: " << op.operation(7, 3) << std::endl;  // Output: Subtraction: 4

    return 0;
}
