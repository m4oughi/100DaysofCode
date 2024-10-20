#include <iostream>

namespace Math {
    int value = 100;
}

int main() {
    std::cout << "Math::value: " << Math::value << std::endl; // Access using scope resolution operator
    return 0;
}
