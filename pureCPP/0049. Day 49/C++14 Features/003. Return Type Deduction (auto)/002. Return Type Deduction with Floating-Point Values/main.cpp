#include <iostream>

auto multiply(double a, double b) {
    return a * b; // Deduces double
}

int main() {
    std::cout << "Multiplication: " << multiply(2.5, 3.0) << std::endl;
    return 0;
}
