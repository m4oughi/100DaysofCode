#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    // Pure Virtual function
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {};

    double calculateArea() const override {
        return width * height;
    };

    double calculatePerimeter() const override {
        return 2 * (width + height);
    };
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {};

    double calculateArea() const override {
        return M_PI * pow(radius, 2);
    };

    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    };
};

class RightTriangle : public Shape {
private:
    double side1, side2, hypotenuse;

public:
    RightTriangle(double s1, double s2, double h) : side1(s1), side2(s2), hypotenuse(h) {};

    double calculateArea() const override {
        return ( side1 * side2 ) / 2;
    };

    double calculatePerimeter() const override {
        return ( side1 + side2 + hypotenuse );
    };
};

class Trapezoid: public Shape {
private:
    double topSide, bottomSide, leftSide, rightSide, height;

public:
    Trapezoid(double ts, double bs, double ls, double rs, double h) : topSide(ts), bottomSide(bs), leftSide(ls), rightSide(rs), height(h) {};

    double calculateArea() const override {
        return( (topSide + bottomSide) * height / 2 );
    };

    double calculatePerimeter() const override {
        return( topSide + bottomSide + leftSide + rightSide );
    };
};

int main() {
    // Create instances of different shapes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    RightTriangle righttriangle(3.0, 4.0, 5.0);
    Trapezoid trapezoid(5, 10, 6, 8, 4);

    // Use polymorphism to calculate area and perimeter
    Shape* shapes[] = { &circle, &rectangle, &righttriangle, &trapezoid };

    for (Shape* shape : shapes) {
        cout << "Area: " << shape->calculateArea() << endl;
        cout << "Perimeter: " << shape->calculatePerimeter() << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}