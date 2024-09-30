#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }

    // Destructor
    ~Circle() {
        cout << "Circle with radius " << radius << " is destroyed." << endl;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(4.5);  // Constructor called
    cout << "Area: " << c.calculateArea() << endl;
    return 0;
}  // Destructor called when the object goes out of scope
