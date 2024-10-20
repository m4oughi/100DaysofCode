#include <iostream>

namespace Math {
    template<typename T>
    T multiply(T a, T b) {
        return a * b;
    }
}

int main() {
    using Math::multiply;  // Using declaration for template function

    std::cout << "Product (int): " << multiply(2, 3) << std::endl;
    std::cout << "Product (double): " << multiply(2.5, 3.5) << std::endl;
    return 0;
}
