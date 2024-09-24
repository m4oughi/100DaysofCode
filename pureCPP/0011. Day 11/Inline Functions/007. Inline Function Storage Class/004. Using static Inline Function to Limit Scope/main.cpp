#include <iostream>

namespace A {
    inline static int internalFunction(int x) {
        return x * x;
    }
}

namespace B {
    // Error: internalFunction() is not visible in this scope
    // std::cout << internalFunction(5) << std::endl; // Compilation error
}

int main() {
    std::cout << "A::internalFunction(4): " << A::internalFunction(4) << std::endl; // Output: 16
    return 0;
}
