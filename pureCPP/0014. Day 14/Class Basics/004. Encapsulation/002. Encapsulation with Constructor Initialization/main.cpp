#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        if (r > 0)
            radius = r;
        else
            radius = 0;
    }

    double getRadius() {
        return radius;
    }

    void setRadius(double r) {
        if (r > 0)
            radius = r;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle(4.5);
    cout << "Area: " << circle.calculateArea() << endl;
    circle.setRadius(3.0);
    cout << "New Area: " << circle.calculateArea() << endl;
    return 0;
}
