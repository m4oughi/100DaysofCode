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
    using Math::add;  // Import only the 'add' function

    std::cout << "Addition: " << add(5, 7) << std::endl;

    // Directly accessing subtract requires scope resolution
    std::cout << "Subtraction: " << Math::subtract(10, 3) << std::endl;
    return 0;
}
