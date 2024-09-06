#include <iostream>

// Define a typedef for a function pointer
typedef int (*MathOp)(int, int);

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    MathOp op;  // Declare a variable of type 'MathOp'

    op = add;  // Assign 'add' to 'op'
    std::cout << "Addition: " << op(8, 2) << std::endl;  // Output: Addition: 10

    op = subtract;  // Assign 'subtract' to 'op'
    std::cout << "Subtraction: " << op(8, 2) << std::endl;  // Output: Subtraction: 6

    return 0;
}
