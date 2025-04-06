#include <iostream>

class Circle {
    double radius;
public:
    constexpr Circle(double r) : radius(r) {}

    constexpr double area() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    constexpr Circle c(10.0);
    constexpr double area = c.area();

    std::cout << "Circle Area: " << area << '\n';
    return 0;
}
