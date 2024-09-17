#include <iostream>

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
};

// Function accepting a member function pointer
void performOperation(Calculator* calc, int (Calculator::*funcPtr)(int, int), int x, int y) {
    std::cout << "Result: " << (calc->*funcPtr)(x, y) << std::endl;
}

int main() {
    Calculator calc;
    performOperation(&calc, &Calculator::add, 10, 5);      // Call member function
    performOperation(&calc, &Calculator::subtract, 10, 5); // Call member function
    return 0;
}
