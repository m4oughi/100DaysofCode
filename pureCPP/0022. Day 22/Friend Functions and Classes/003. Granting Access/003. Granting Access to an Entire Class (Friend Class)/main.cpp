#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Granting access to another class
    friend class ShapeOperations;
};

class ShapeOperations {
public:
    int calculatePerimeter(Rectangle rect) {
        return 2 * (rect.length + rect.width);  // Accessing private members of Rectangle
    }

    int calculateArea(Rectangle rect) {
        return rect.length * rect.width;  // Accessing private members of Rectangle
    }
};

int main() {
    Rectangle rect(10, 5);
    ShapeOperations shapeOps;
    cout << "Perimeter: " << shapeOps.calculatePerimeter(rect) << endl;
    cout << "Area: " << shapeOps.calculateArea(rect) << endl;
    return 0;
}
