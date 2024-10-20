#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

int main() {
    using namespace Math;  // Importing entire Math namespace into the current scope

    std::cout << "Addition: " << add(3, 5) << std::endl;
    std::cout << "Subtraction: " << subtract(10, 5) << std::endl;  // Direct access without scope resolution
    return 0;
}
