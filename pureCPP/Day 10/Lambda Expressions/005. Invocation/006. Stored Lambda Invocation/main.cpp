#include <iostream>

int main() {
    // Storing a lambda in a variable
    auto multiply = [](int a, int b) {
        return a * b;
    };
    std::cout << "Product: " << multiply(7, 6) << std::endl; // Outputs: Product: 42
    return 0;
}
