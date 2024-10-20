#include <iostream>

namespace Math {
    void add(int a, int b) {
        std::cout << "Sum: " << a + b << std::endl;
    }
}

int main() {
    Math::add(3, 4);  // Accessing function inside the namespace block
    return 0;
}
