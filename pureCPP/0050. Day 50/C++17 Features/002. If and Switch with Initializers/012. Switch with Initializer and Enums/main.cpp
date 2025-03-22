#include <iostream>

enum class Color { Red, Green, Blue };

Color getColor() {
    return Color::Green;
}

int main() {
    switch (Color c = getColor(); c) {
        case Color::Red:
            std::cout << "Red color\n";
            break;
        case Color::Green:
            std::cout << "Green color\n";
            break;
        case Color::Blue:
            std::cout << "Blue color\n";
            break;
    }
    return 0;
}
