#include <iostream>

namespace Math {
    inline int square(int x) {
        return x * x;
    }
}

// Extending the Math namespace with another inline function
namespace Math {
    inline int cube(int x) {
        return x * x * x;
    }
}

int main() {
    std::cout << "Square of 4: " << Math::square(4) << std::endl;
    std::cout << "Cube of 3: " << Math::cube(3) << std::endl;
    return 0;
}
