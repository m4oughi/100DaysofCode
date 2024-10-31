#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateSquareRoot(double num) {
    if (num < 0) {
        throw std::domain_error("Negative number passed to sqrt");
    }
    return std::sqrt(num);
}

int main() {
    try {
        std::cout << calculateSquareRoot(-5) << std::endl;  // Invalid argument
    } catch (const std::domain_error& e) {
        std::cout << "Caught domain_error exception: " << e.what() << std::endl;
    }
    return 0;
}
