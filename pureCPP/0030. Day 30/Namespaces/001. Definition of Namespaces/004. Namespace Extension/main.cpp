#include <iostream>

namespace Math {
    int subtract(int a, int b) {
        return a - b;
    }
}

namespace Math {
    int divide(int a, int b) {
        return a / b;
    }
}

int main() {
    std::cout << "Subtraction: " << Math::subtract(10, 5) << std::endl;
    std::cout << "Division: " << Math::divide(20, 4) << std::endl;
    return 0;
}
