#include <iostream>

namespace Math {
    namespace Basic {
        int add(int a, int b) {
            return a + b;
        }

        int add(int a, int b, int c) {
            return a + b + c;
        }
    }
}

int main() {
    std::cout << "Sum of two numbers: " << Math::Basic::add(2, 3) << std::endl;
    std::cout << "Sum of three numbers: " << Math::Basic::add(2, 3, 4) << std::endl;
    return 0;
}
