#include <iostream>
#include <stdexcept>

void calculateSquareRoot(int x) {
    if (x < 0) {
        throw std::logic_error("Cannot calculate the square root of a negative number");
    }
    std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
}

int main() {
    try {
        calculateSquareRoot(-9);
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    }
    return 0;
}
