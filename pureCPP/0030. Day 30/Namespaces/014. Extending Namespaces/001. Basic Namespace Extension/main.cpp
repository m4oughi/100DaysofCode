#include <iostream>

namespace MathOperations {
    void add(int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    }
}

// Extending the MathOperations namespace
namespace MathOperations {
    void subtract(int a, int b) {
        std::cout << "Difference: " << a - b << std::endl;
    }
}

int main() {
    MathOperations::add(10, 5);       // Calls the add function
    MathOperations::subtract(10, 5);  // Calls the newly added subtract function
    return 0;
}
