#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {  // Const member function
        return radius;
    }
};

int main() {
    Circle c(5.0);
    cout << "Radius: " << c.getRadius() << endl;  // Calling const member function
    return 0;
}
