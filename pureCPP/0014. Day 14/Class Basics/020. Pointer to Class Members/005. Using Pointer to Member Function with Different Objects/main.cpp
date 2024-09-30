#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    Rectangle(int l, int w) : length(l), width(w) {}

    int area() const {
        return length * width;
    }
};

int main() {
    Rectangle r1(4, 5), r2(7, 8);

    // Pointer to member function
    int (Rectangle::*areaPtr)() const = &Rectangle::area;

    // Calling member function on different objects
    cout << "Area of r1: " << (r1.*areaPtr)() << endl;
    cout << "Area of r2: " << (r2.*areaPtr)() << endl;

    return 0;
}
