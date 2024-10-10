#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() {
        return 0.0;
    }
};

class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14 * radius * radius;
    }
private:
    double radius;
};

int main() {
    Shape* shape = new Circle(5);
    cout << "Area of circle: " << shape->area() << endl;
    delete shape;
    return 0;
}
