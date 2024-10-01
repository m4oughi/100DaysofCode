#include <iostream>

class Circle {
private:
    double radius;
public:
    // Default constructor
    Circle() : radius(1.0) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Constructor with one parameter
    Circle(double r) : radius(r) {
        std::cout << "Constructor with one parameter called." << std::endl;
    }

    void display() const {
        std::cout << "Circle radius: " << radius << std::endl;
    }
};

int main() {
    Circle c1;          // Default constructor
    Circle c2(5.0);      // Constructor with one parameter
    c1.display();
    c2.display();
    return 0;
}
