#include <iostream>

class Calculator {
public:
    // Overloaded member functions
    int operate(int a, int b) {
        return a + b;
    }

    double operate(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    std::cout << "Sum: " << calc.operate(3, 4) << std::endl;       // Calls operate(int, int)
    std::cout << "Product: " << calc.operate(3.14, 2.5) << std::endl;  // Calls operate(double, double)
    return 0;
}
