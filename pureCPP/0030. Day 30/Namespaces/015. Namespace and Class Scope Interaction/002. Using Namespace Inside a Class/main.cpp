#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

class Calculator {
public:
    int calculateSum(int a, int b) {
        return Math::add(a, b); // Using the namespace function
    }
};

int main() {
    Calculator calc;
    std::cout << "Sum: " << calc.calculateSum(10, 5) << std::endl; // Accessing class method
    return 0;
}
