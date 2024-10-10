#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};

class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    Circle circle(5);
    circle.draw();                      // Outputs "Drawing Circle"
    cout << "Area: " << circle.area();   // Outputs "Area: 78.5"
    return 0;
}
