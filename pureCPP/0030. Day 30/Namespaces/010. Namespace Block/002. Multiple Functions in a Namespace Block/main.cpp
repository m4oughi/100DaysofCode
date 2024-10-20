#include <iostream>

namespace Geometry {
    void areaCircle(double radius) {
        std::cout << "Area of Circle: " << 3.14159 * radius * radius << std::endl;
    }

    void areaSquare(double side) {
        std::cout << "Area of Square: " << side * side << std::endl;
    }
}

int main() {
    Geometry::areaCircle(5.0);
    Geometry::areaSquare(4.0);
    return 0;
}
