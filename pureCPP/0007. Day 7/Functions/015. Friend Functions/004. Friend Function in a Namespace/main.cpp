#include <iostream>

namespace Geometry {
    class Circle {
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        // Friend function declaration inside the namespace
        friend double getCircumference(const Circle& c);
    };

    // Friend function definition outside the class
    double getCircumference(const Circle& c) {
        return 2 * 3.1416 * c.radius;
    }
}

int main() {
    Geometry::Circle circle(10);
    std::cout << "Circumference: " << Geometry::getCircumference(circle) << std::endl;

    return 0;
}
