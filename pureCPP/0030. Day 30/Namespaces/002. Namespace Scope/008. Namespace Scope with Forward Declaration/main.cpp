#include <iostream>

namespace Math {
    int multiply(int a, int b);  // Forward declaration
}

int Math::multiply(int a, int b) {  // Function definition outside the namespace block
    return a * b;
}

int main() {
    std::cout << "Multiplication: " << Math::multiply(4, 5) << std::endl;
    return 0;
}
