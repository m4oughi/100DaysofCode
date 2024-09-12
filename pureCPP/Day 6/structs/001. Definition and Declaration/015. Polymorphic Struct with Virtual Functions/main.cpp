#include <iostream>

struct Shape {
    virtual double area() const = 0;
};

struct Circle : public Shape {
    double radius;

    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {

    return 0;
}