#include <iostream>

namespace Math {
    int value = 10;

    int multiply(int a, int b) {
        return a * b;
    }
}

int main() {
    std::cout << "Value: " << Math::value << std::endl;  // Accessing variable
    std::cout << "Multiplication: " << Math::multiply(4, 5) << std::endl;  // Accessing function
    return 0;
}
