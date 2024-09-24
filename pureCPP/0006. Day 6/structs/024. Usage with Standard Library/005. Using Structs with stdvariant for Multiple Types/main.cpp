#include <iostream>
#include <variant>

struct Circle {
    int radius;
};

struct Square {
    int side;
};

int main() {
    std::variant<Circle, Square> shape = Circle{10};

    if (std::holds_alternative<Circle>(shape)) {
        std::cout << "Circle with radius: " << std::get<Circle>(shape).radius << "\n";
    }

    shape = Square{5};

    if (std::holds_alternative<Square>(shape)) {
        std::cout << "Square with side: " << std::get<Square>(shape).side << "\n";
    }

    return 0;
}
