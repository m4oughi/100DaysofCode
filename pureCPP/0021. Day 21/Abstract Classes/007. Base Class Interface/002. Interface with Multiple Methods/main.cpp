#include <iostream>
using namespace std;

class IShape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;  // Another pure virtual function
};

class Circle : public IShape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public IShape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    circle.draw();  // Outputs "Drawing Circle"
    cout << "Area: " << circle.area() << endl;  // Outputs "Area: 78.5"

    rectangle.draw();  // Outputs "Drawing Rectangle"
    cout << "Area: " << rectangle.area() << endl;  // Outputs "Area: 24"
    
    return 0;
}
