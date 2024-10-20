#include <iostream>

namespace Geometry {
    struct Point {
        int x, y;
        void display() {
            std::cout << "Point (" << x << ", " << y << ")" << std::endl;
        }
    };
}

// Extending the Geometry namespace with an enum
namespace Geometry {
    enum ShapeType { CIRCLE, SQUARE };

    void printShape(ShapeType type) {
        if (type == CIRCLE) std::cout << "This is a Circle" << std::endl;
        else std::cout << "This is a Square" << std::endl;
    }
}

int main() {
    Geometry::Point p = {5, 10};
    p.display();                           // Displaying point

    Geometry::printShape(Geometry::CIRCLE);  // Accessing extended enum and function
    Geometry::printShape(Geometry::SQUARE);
    return 0;
}
