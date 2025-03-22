#include <iostream>

namespace Math::Operations {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << "Sum: " << Math::Operations::add(10, 20) << '\n';
    return 0;
}
