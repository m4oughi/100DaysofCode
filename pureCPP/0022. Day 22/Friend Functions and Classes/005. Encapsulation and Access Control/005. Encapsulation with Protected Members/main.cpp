#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;  // Encapsulated protected data

public:
    Shape(double dim) : dimension(dim) {}

    // Friend function declaration
    friend double calculateArea(Shape shape);
};

// Friend function accessing protected members
double calculateArea(Shape shape) {
    return shape.dimension * shape.dimension;  // Accessing encapsulated protected member
}

int main() {
    Shape square(4.0);
    cout << "Area: " << calculateArea(square) << endl;  // Controlled access to protected encapsulated data
    return 0;
}
