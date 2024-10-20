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
    using Math::add;  // Importing only the 'add' function from Math namespace
    std::cout << "Addition: " << add(3, 5) << std::endl;

    // Cannot call subtract directly without scope resolution
    std::cout << "Subtraction: " << Math::subtract(10, 5) << std::endl;
    return 0;
}
