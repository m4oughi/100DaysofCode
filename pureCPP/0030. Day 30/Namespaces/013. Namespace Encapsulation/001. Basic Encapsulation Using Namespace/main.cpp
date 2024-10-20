#include <iostream>

namespace MathOperations {
    void add(int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    }

    void subtract(int a, int b) {
        std::cout << "Difference: " << a - b << std::endl;
    }
}

int main() {
    MathOperations::add(10, 5);       // Access add function
    MathOperations::subtract(10, 5);  // Access subtract function
    return 0;
}
