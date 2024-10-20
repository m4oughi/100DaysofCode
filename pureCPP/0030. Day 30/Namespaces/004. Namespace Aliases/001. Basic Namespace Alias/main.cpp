#include <iostream>

namespace Mathematics {
    int add(int a, int b) {
        return a + b;
    }
}

// Alias for Mathematics namespace
namespace Math = Mathematics;

int main() {
    std::cout << "Addition: " << Math::add(3, 4) << std::endl;  // Using the alias 'Math'
    return 0;
}
