#include <iostream>

namespace Math {
    void calculate(int x) {
        std::cout << "Math calculate: " << x * x << std::endl;
    }
}

namespace Physics {
    void calculate(double x) {
        std::cout << "Physics calculate: " << x * 9.8 << std::endl;
    }
}

int main() {
    Math::calculate(5);  // Calls Math version of calculate
    Physics::calculate(5.0);  // Calls Physics version of calculate
    return 0;
}
