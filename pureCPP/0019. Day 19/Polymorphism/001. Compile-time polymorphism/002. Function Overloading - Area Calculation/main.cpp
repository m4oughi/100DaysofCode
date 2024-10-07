#include <iostream>
using namespace std;

int area(int side) {
    return side * side;  // Square
}

int area(int length, int width) {
    return length * width;  // Rectangle
}

double area(double radius) {
    return 3.14159 * radius * radius;  // Circle
}

int main() {
    cout << "Area of square: " << area(5) << endl;
    cout << "Area of rectangle: " << area(4, 6) << endl;
    cout << "Area of circle: " << area(3.5) << endl;
    return 0;
}
