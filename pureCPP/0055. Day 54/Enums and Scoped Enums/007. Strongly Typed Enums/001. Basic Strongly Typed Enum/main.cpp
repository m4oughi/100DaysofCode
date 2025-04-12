#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Green;

    if (c == Color::Green) {
        std::cout << "Color is Green\n";
    }
}
