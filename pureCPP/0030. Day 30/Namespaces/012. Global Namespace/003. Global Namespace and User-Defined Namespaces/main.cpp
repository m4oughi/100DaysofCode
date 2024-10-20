#include <iostream>

namespace Math {
    void add(int a, int b) {
        std::cout << "Sum (Math namespace): " << a + b << std::endl;
    }
}

void add(int a, int b) {  // Global add function
    std::cout << "Sum (Global namespace): " << a + b << std::endl;
}

int main() {
    add(3, 4);            // Calls global add
    Math::add(3, 4);      // Calls Math namespace add
    return 0;
}
