#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;        // Pure virtual function
    virtual double area() = 0;      // Another pure virtual function
};

// Derived class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle(5.0);
    circle.draw();  // Calls draw() function in Circle
    cout << "Area: " << circle.area() << endl;  // Calls area() function in Circle

    return 0;
}
