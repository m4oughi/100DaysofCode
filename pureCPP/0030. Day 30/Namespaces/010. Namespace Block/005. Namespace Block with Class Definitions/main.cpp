#include <iostream>

namespace Shapes {
    class Circle {
    public:
        Circle(double radius) : radius(radius) {}

        void draw() {
            std::cout << "Drawing Circle with radius " << radius << std::endl;
        }

    private:
        double radius;
    };
}

int main() {
    Shapes::Circle circle(5.0);
    circle.draw();  // Accessing class inside the namespace block
    return 0;
}
