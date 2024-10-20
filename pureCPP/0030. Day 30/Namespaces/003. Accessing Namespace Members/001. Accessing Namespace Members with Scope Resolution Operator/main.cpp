#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << "Addition: " << Math::add(2, 3) << std::endl;  // Accessing function using Math::add
    return 0;
}
