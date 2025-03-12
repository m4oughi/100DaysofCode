#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color myColor = Color::Red;
    if (myColor == Color::Red) {
        std::cout << "Color is Red\n";
    }
    return 0;
}
