#include <iostream>

int main() {
    auto multiply = [](auto a, auto b) {
        return a * b;
    };

    std::cout << multiply(3, 4) << std::endl;       // Outputs: 12
    std::cout << multiply(3.14, 2) << std::endl;    // Outputs: 6.28
    return 0;
}
