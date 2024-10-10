#include <iostream>
using namespace std;

class Circle {
protected:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Friend function declaration
    friend double calculateArea(Circle circle);
};

// Friend function accessing protected members
double calculateArea(Circle circle) {
    return 3.14159 * circle.radius * circle.radius;
}

int main() {
    Circle circle(5.0);
    cout << "Area: " << calculateArea(circle) << endl;  // Friend function accessing protected member
    return 0;
}
