#include <iostream>

namespace Operations {
    void compute(int a) {
        std::cout << "Computing square: " << a * a << std::endl;
    }
}

// Extending the namespace with an overloaded function
namespace Operations {
    void compute(double a) {
        std::cout << "Computing square: " << a * a << std::endl;
    }
}

int main() {
    Operations::compute(5);    // Calls the integer version
    Operations::compute(5.5);  // Calls the double version
    return 0;
}
