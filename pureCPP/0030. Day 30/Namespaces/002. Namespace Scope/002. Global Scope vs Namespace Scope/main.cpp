#include <iostream>

int value = 50;  // Global variable

namespace Math {
    int value = 100;  // Namespace-scoped variable
}

int main() {
    std::cout << "Global value: " << ::value << std::endl;  // Global scope access
    std::cout << "Namespace Math::value: " << Math::value << std::endl;  // Namespace scope access
    return 0;
}
