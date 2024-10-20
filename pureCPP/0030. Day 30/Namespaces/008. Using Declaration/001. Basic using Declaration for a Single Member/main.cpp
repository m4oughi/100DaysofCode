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
    using Math::add;  // Only importing `add` function from Math namespace

    std::cout << "Sum: " << add(3, 4) << std::endl;  // Can use `add` directly
    // subtract(5, 3);  // This would cause an error since subtract is not in scope
    return 0;
}
