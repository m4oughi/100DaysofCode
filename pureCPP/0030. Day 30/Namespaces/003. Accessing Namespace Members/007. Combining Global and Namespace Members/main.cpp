#include <iostream>

int value = 100;  // Global variable

namespace Math {
    int value = 200;  // Namespace variable

    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << "Global value: " << ::value << std::endl;  // Access global variable
    std::cout << "Namespace value: " << Math::value << std::endl;  // Access namespace variable
    std::cout << "Addition: " << Math::add(5, 7) << std::endl;  // Access namespace function
    return 0;
}
