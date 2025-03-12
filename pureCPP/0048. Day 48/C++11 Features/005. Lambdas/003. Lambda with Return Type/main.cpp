#include <iostream>

int main() {
    auto multiply = [](double a, double b) -> double {
        return a * b;
    };

    std::cout << "Product: " << multiply(3.5, 2.0) << std::endl;

    return 0;
}
