#include <iostream>

struct Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }
};


int main() {

    return 0;
}