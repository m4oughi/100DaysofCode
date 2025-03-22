#include <iostream>
#include <variant>

struct Circle { double radius; };
struct Rectangle { double width, height; };

using Shape = std::variant<Circle, Rectangle>;

void printArea(const Shape& shape) {
    std::visit([](const auto& s) {
        if constexpr (std::is_same_v<std::decay_t<decltype(s)>, Circle>) {
            std::cout << "Circle Area: " << 3.1415 * s.radius * s.radius << '\n';
        } else {
            std::cout << "Rectangle Area: " << s.width * s.height << '\n';
        }
    }, shape);
}

int main() {
    Shape shape1 = Circle{5.0};
    Shape shape2 = Rectangle{4.0, 6.0};

    printArea(shape1);
    printArea(shape2);

    return 0;
}
