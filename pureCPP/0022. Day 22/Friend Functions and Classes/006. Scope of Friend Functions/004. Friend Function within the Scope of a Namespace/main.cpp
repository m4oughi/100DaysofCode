#include <iostream>
using namespace std;

namespace Geometry {

class Square {
private:
    double side;  // Private member

public:
    Square(double s) : side(s) {}

    // Friend function declaration
    friend double calculateArea(Square square);
};

// Friend function definition outside class but within namespace scope
double calculateArea(Square square) {
    return square.side * square.side;  // Accessing private member
}

}  // End of namespace

int main() {
    Geometry::Square square(4.0);
    cout << "Area: " << Geometry::calculateArea(square) << endl;  // Using friend function in namespace scope
    return 0;
}
