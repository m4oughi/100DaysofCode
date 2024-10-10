#include <iostream>
using namespace std;

class Circle {
private:
    double radius;  // Private member

public:
    Circle(double r) : radius(r) {}

    // Friend function declared in the scope of the class
    friend double getRadius(Circle circle);
};

// Friend function defined outside the class
double getRadius(Circle circle) {
    return circle.radius;  // Accessing private member
}

int main() {
    Circle circle(5.0);
    cout << "Radius: " << getRadius(circle) << endl;  // Friend function accessing private data
    return 0;
}
