#include <iostream>

namespace Geometry {
    double areaCircle(double radius) {
        return 3.14159 * radius * radius;
    }

    double areaSquare(double side) {
        return side * side;
    }
}

int main() {
    using Geometry::areaCircle;
    using Geometry::areaSquare;

    std::cout << "Area of Circle: " << areaCircle(5.0) << std::endl;
    std::cout << "Area of Square: " << areaSquare(4.0) << std::endl;
    return 0;
}
