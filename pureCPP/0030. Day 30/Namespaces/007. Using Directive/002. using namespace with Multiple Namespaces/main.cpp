#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

namespace Physics {
    void gravity() {
        std::cout << "Gravity in action!" << std::endl;
    }
}

int main() {
    using namespace Math;
    using namespace Physics;

    std::cout << "Sum: " << add(3, 4) << std::endl;  // Accessing Math namespace
    gravity();  // Accessing Physics namespace
    return 0;
}
