#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Using member initialization list
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle(4.5);  // Object creation with initialization
    cout << "Area: " << circle.calculateArea() << endl;
    return 0;
}
