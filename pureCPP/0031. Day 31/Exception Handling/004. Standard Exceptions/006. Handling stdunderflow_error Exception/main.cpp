#include <iostream>
#include <stdexcept>

int main() {
    try {
        float small = 1.17549e-38;  // Minimum positive value for float
        small /= 10;
        throw std::underflow_error("Underflow error occurred");
    } catch (const std::underflow_error& e) {
        std::cout << "Caught underflow_error: " << e.what() << std::endl;
    }
    return 0;
}
