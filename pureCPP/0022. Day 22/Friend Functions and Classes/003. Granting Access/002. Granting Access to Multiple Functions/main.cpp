#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Granting access to multiple functions
    friend double calculateArea(Circle circle);
    friend double calculateCircumference(Circle circle);
};

double calculateArea(Circle circle) {
    return 3.14159 * circle.radius * circle.radius;  // Accessing private member
}

double calculateCircumference(Circle circle) {
    return 2 * 3.14159 * circle.radius;  // Accessing private member
}

int main() {
    Circle circle(5.0);
    cout << "Area: " << calculateArea(circle) << endl;
    cout << "Circumference: " << calculateCircumference(circle) << endl;
    return 0;
}
