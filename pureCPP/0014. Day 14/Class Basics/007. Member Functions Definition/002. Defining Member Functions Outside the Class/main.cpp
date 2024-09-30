#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Member function declared inside the class
    void setRadius(double r);
    double calculateArea();
};

// Member function defined outside the class
void Circle::setRadius(double r) {
    radius = r;
}

double Circle::calculateArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circle;
    circle.setRadius(4.5);
    cout << "Area: " << circle.calculateArea() << endl;
    return 0;
}
