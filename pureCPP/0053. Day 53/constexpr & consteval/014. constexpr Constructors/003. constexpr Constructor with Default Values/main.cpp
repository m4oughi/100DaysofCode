#include <iostream>

class Circle {
public:
    constexpr Circle(double r = 1.0) : radius(r) {}

    constexpr double getRadius() const { return radius; }

private:
    double radius;
};

int main() {
    constexpr Circle c1;       // ✅ Uses default radius (1.0)
    constexpr Circle c2(5.5);  // ✅ Uses provided radius (5.5)

    std::cout << "Circle1 Radius: " << c1.getRadius() << '\n';
    std::cout << "Circle2 Radius: " << c2.getRadius() << '\n';
}
