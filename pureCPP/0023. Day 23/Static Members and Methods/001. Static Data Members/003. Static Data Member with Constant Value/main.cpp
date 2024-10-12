#include <iostream>
using namespace std;

class Circle {
public:
    static const double pi;  // Static constant data member

    double radius;

    Circle(double r) : radius(r) {}

    double area() {
        return pi * radius * radius;
    }
};

// Initialize static const data member within class definition
const double Circle::pi = 3.14159;

int main() {
    Circle c1(5.0);

    cout << "Area of circle: " << c1.area() << endl;
    return 0;
}
