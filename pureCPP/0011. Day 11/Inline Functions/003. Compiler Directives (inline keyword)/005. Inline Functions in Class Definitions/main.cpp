#include <iostream>

class Circle {
public:
    // Inline function to calculate the area of the circle
    inline double area(double radius) const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle;
    std::cout << "Area of circle with radius 5: " << circle.area(5) << std::endl; // Output: Area of circle with radius 5: 78.5397
    return 0;
}
