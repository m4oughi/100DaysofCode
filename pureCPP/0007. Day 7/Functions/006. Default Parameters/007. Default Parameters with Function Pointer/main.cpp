#include <iostream>

// Function declaration with default parameter and function pointer
void operate(int a, int b, int (*func)(int, int) = [](int x, int y) { return x + y; });

int main() {
    operate(5, 3);                   // Uses default lambda (addition)
    operate(5, 3, [](int x, int y) { return x * y; });  // Custom function (multiplication)
    return 0;
}

// Function definition with default parameter (lambda function)
void operate(int a, int b, int (*func)(int, int)) {
    std::cout << "Result: " << func(a, b) << std::endl;
}
