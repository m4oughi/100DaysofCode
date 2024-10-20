#include <iostream>

namespace Operations {
    void compute(int a) {
        std::cout << "Computing with integer: " << a * a << std::endl;
    }

    void compute(double a) {
        std::cout << "Computing with double: " << a * a << std::endl;
    }
}

int main() {
    Operations::compute(5);      // Calls integer version
    Operations::compute(5.5);    // Calls double version
    return 0;
}
