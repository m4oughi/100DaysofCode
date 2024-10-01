#include <iostream>

class Circle {
private:
    const double radius;
public:
    // Member initialization list for const member
    Circle(double r) : radius(r) {
        std::cout << "Circle initialized with radius = " << radius << std::endl;
    }
};

int main() {
    Circle c(3.5);  // Initializes radius to 3.5
    return 0;
}
