#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    const Circle& compare(const Circle &other) const {
        return (radius > other.radius) ? *this : other;  // Returning constant object by reference
    }

    void display() const {
        cout << "Radius: " << radius << endl;
    }
};

int main() {
    Circle c1(5.0), c2(7.0);

    const Circle& largerCircle = c1.compare(c2);  // Receiving the constant reference
    largerCircle.display();

    return 0;
}
