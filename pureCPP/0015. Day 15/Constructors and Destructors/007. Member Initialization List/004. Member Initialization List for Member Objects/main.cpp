#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

class Rectangle {
private:
    Point topLeft, bottomRight;
public:
    // Member initialization list for member objects
    Rectangle(int x1, int y1, int x2, int y2) : topLeft(x1, y1), bottomRight(x2, y2) {}

    void display() const {
        std::cout << "Rectangle corners: ";
        topLeft.display();
        bottomRight.display();
    }
};

int main() {
    Rectangle r(0, 5, 5, 0);  // Initializes corners of the rectangle
    r.display();
    return 0;
}
