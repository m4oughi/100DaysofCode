#include <iostream>
using namespace std;

class Circle {
private:
    double radius;  // Encapsulated private member

public:
    Circle(double r) : radius(r) {}

    // Friend function declaration
    friend double calculateArea(Circle circle);
};

// Friend function providing controlled access to private data
double calculateArea(Circle circle) {
    return 3.14159 * circle.radius * circle.radius;
}

int main() {
    Circle circle(5.0);
    cout << "Area: " << calculateArea(circle) << endl;  // Accessing encapsulated data via friend function
    return 0;
}
