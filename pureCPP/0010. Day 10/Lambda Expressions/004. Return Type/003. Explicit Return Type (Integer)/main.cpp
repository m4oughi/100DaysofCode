#include <iostream>

int main() {
    // Lambda with explicit return type (int)
    auto multiply = [](int a, int b) -> int {
        return a * b;
    };
    std::cout << "Product: " << multiply(4, 5) << std::endl; // Outputs: Product: 20
    return 0;
}
