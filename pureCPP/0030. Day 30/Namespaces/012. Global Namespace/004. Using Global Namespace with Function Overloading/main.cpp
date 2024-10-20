#include <iostream>

namespace Math {
    void multiply(int a, int b) {
        std::cout << "Multiplication in Math namespace: " << a * b << std::endl;
    }
}

void multiply(int a, int b) {
    std::cout << "Multiplication in Global namespace: " << a * b << std::endl;
}

int main() {
    multiply(2, 3);        // Calls global multiply
    Math::multiply(2, 3);  // Calls Math::multiply
    return 0;
}
