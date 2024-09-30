#include <iostream>
using namespace std;

class Circle {
public:
    const double radius;

    Circle(double r) : radius(r) {}

    double getArea() const {
        return 3.14 * radius * radius;
    }
};

double calculateArea(const Circle &c) {  // Function accepts constant object
    return c.getArea();
}

int main() {
    Circle c1(5.0);
    cout << "Area of circle: " << calculateArea(c1) << endl;

    return 0;
}
