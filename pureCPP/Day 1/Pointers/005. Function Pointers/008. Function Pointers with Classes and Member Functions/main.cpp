#include <iostream>

class Calculator {
public:
    // Static member functions
    static int add(int a, int b) { return a + b; }
    static int subtract(int a, int b) { return a - b; }
};

int main() {
    // Declare a function pointer for static member functions
    int (*operation)(int, int);

    // Assign and use the function pointer
    operation = Calculator::add;
    std::cout << "Addition: " << operation(10, 5) << std::endl;  // Output: Addition: 15

    operation = Calculator::subtract;
    std::cout << "Subtraction: " << operation(10, 5) << std::endl;  // Output: Subtraction: 5

    return 0;
}
