#include <iostream>

enum class Color {
    Red,
    Green,
    Blue
};

template <Color C>
void printColor() {
    if constexpr (C == Color::Red) {
        std::cout << "Red color\n";
    } else if constexpr (C == Color::Green) {
        std::cout << "Green color\n";
    } else if constexpr (C == Color::Blue) {
        std::cout << "Blue color\n";
    }
}

int main() {
    printColor<Color::Red>();   // Output: Red color
    printColor<Color::Green>(); // Output: Green color
    printColor<Color::Blue>();  // Output: Blue color
    return 0;
}
