#include <iostream>
#include <stdexcept>

void complexCalculation(int x) {
    if (x == 0) {
        throw std::runtime_error("Runtime error: Cannot compute with zero");
    }
    std::cout << "Complex result: " << 1000 / x << std::endl;
}

int main() {
    try {
        complexCalculation(0);
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
