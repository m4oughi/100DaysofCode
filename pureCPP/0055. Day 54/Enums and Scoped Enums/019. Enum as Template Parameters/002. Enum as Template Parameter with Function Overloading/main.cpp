#include <iostream>

enum class Shape {
    Circle,
    Square
};

template <Shape S>
void draw() {
    if constexpr (S == Shape::Circle) {
        std::cout << "Drawing a Circle\n";
    } else if constexpr (S == Shape::Square) {
        std::cout << "Drawing a Square\n";
    }
}

int main() {
    draw<Shape::Circle>();  // Output: Drawing a Circle
    draw<Shape::Square>();  // Output: Drawing a Square
    return 0;
}
