#include <iostream>

class Circle {
private:
    double radius;
public:
    Circle() {
        radius = 1.0;
        std::cout << "Default circle created with radius = " << radius << std::endl;
    }

    Circle(double r) {
        radius = r;
        std::cout << "Circle created with radius = " << radius << std::endl;
    }
};

int main() {
    Circle c1;       // Calls default constructor
    Circle c2(5.5);  // Calls parameterized constructor
    return 0;
}
