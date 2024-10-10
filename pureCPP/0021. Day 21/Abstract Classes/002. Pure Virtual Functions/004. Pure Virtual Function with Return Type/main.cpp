#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
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
    Circle circle(5);
    cout << "Area of circle: " << circle.area() << endl;
    return 0;
}
