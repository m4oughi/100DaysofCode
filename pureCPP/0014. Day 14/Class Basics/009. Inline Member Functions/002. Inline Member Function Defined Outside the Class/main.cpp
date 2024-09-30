#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Inline member function defined outside the class
    inline double calculateArea();
};

inline double Circle::calculateArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circle(4.5);
    cout << "Area: " << circle.calculateArea() << endl;
    return 0;
}
