#include <iostream>

int main() {
    // Lambda that takes two integers and returns their product
    auto multiply = [](int x, int y) -> int { return x * y; };
    std::cout << "Product: " << multiply(4, 5) << std::endl;
    return 0;
}
