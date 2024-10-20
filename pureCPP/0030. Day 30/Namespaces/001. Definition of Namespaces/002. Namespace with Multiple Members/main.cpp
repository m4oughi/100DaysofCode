#include <iostream>

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

int main() {
    std::cout << "Addition: " << MathOperations::add(2, 3) << std::endl;
    std::cout << "Multiplication: " << MathOperations::multiply(4, 5) << std::endl;
    return 0;
}
