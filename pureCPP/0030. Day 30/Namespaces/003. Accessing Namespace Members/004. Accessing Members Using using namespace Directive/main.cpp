#include <iostream>

namespace Geometry {
    int area(int length, int width) {
        return length * width;
    }

    int perimeter(int length, int width) {
        return 2 * (length + width);
    }
}

int main() {
    using namespace Geometry;  // Import the entire Geometry namespace

    std::cout << "Area: " << area(5, 7) << std::endl;  // Direct access
    std::cout << "Perimeter: " << perimeter(5, 7) << std::endl;  // Direct access
    return 0;
}
