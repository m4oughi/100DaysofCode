#include <iostream>

class Calculator {
public:
    // Inline function defined inside a class
    inline int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    std::cout << "Product: " << calc.multiply(4, 5) << std::endl; // Output: Product: 20
    return 0;
}
