#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) { // Constructor
        radius = r;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle(4.5);  // Creating an object and calling constructor
    cout << "Area: " << circle.calculateArea() << endl;
    return 0;
}
