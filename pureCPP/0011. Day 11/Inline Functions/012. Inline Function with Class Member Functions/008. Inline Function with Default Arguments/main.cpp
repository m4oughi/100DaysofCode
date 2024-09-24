#include <iostream>

class Calculator {
public:
    // Inline member function with default arguments
    inline int multiply(int a = 1, int b = 1) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    std::cout << "Product: " << calc.multiply(5, 4) << std::endl; // Output: Product: 20
    std::cout << "Default Product: " << calc.multiply() << std::endl; // Output: Default Product: 1
    return 0;
}
