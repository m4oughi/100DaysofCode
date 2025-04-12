#include <iostream>

enum Color { Red, Green, Blue };

int main() {
    // Red is directly accessible due to unscoped enum
    Color c = Red;
    std::cout << "Color: " << c << std::endl;
}
