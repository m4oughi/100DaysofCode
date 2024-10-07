#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;   // Pure virtual function
    virtual double perimeter() const = 0;  // Another pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    cout << "Circle Area: " << shape1->area() << endl;
    cout << "Rectangle Perimeter: " << shape2->perimeter() << endl;

    return 0;
}
