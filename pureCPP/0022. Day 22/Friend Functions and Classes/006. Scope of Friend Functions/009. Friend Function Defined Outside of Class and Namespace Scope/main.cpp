#include <iostream>
using namespace std;

namespace Geometry {

class Triangle {
private:
    double base, height;  // Private members

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Friend function declaration
    friend double calculateArea(Triangle triangle);
};

}  // End of namespace

// Friend function defined outside both class and namespace scope
double calculateArea(Geometry::Triangle triangle) {
    return 0.5 * triangle.base * triangle.height;  // Accessing private members
}

int main() {
    Geometry::Triangle triangle(10.0, 5.0);
    cout << "Area of triangle: " << calculateArea(triangle) << endl;  // Accessing private members via friend function
    return 0;
}
