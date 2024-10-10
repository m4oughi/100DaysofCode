#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
    double area() override {
        return 3.14 * radius * radius;
    }
    Circle(double r) : radius(r) {}
private:
    double radius;
};

int main() {
    Circle circle(5);
    circle.draw();
    cout << "Area: " << circle.area() << endl;
    return 0;
}
