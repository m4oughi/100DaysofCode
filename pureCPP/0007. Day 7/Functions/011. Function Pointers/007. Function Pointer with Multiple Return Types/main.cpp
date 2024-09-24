#include <iostream>

int add(int a, int b) { return a + b; }
double divide(double a, double b) { return a / b; }

// Wrapper function for calling different types
template <typename T>
void executeOperation(T (*funcPtr)(T, T), T x, T y) {
    std::cout << "Result: " << funcPtr(x, y) << std::endl;
}

int main() {
    executeOperation(add, 10, 5);       // Call with integer function
    executeOperation(divide, 10.0, 5.0); // Call with double function
    return 0;
}
