#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Friend function declaration
    friend double calculateDiameter(Circle);
};

// Friend function definition
double calculateDiameter(Circle c) {
    return c.radius * 2;
}

int main() {
    Circle circle(7);
    cout << "Diameter of Circle: " << calculateDiameter(circle) << endl;
    return 0;
}
