#include <iostream>

int main() {
    auto multiply = [](int a, int b) -> double {
        return static_cast<double>(a * b);
    };
    std::cout << "Multiplication: " << multiply(4, 5) << std::endl;
    return 0;
}
