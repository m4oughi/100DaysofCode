#include <iostream>

int main() {
    auto multiply = [](auto a, auto b) -> decltype(a * b) {
        return a * b;
    };

    std::cout << "Product of 4 and 2: " << multiply(4, 2) << std::endl;         // Outputs: 8
    std::cout << "Product of 1.5 and 2.0: " << multiply(1.5, 2.0) << std::endl; // Outputs: 3
    return 0;
}
