#include <iostream>

namespace Geometry {
    class Circle {
    public:
        void draw() {
            std::cout << "Drawing Circle" << std::endl;
        }
    };

    class Square {
    public:
        void draw() {
            std::cout << "Drawing Square" << std::endl;
        }
    };
}

int main() {
    Geometry::Circle circle;
    Geometry::Square square;

    circle.draw();  // Encapsulated access
    square.draw();
    return 0;
}
