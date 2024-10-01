#include <iostream>

class Vector {
private:
    int x, y;
public:
    // Delegating constructor and member initialization
    Vector() : Vector(0, 0) {}

    // Main constructor with initialization list
    Vector(int xVal, int yVal) : x(xVal), y(yVal) {
        std::cout << "Vector initialized with x = " << x << " and y = " << y << std::endl;
    }

    void display() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }
};

class Polygon {
private:
    Vector startPoint, endPoint;
    const int sides;
public:
    // Member initialization list for delegating constructor and const member
    Polygon(int sx, int sy, int ex, int ey, int numSides) 
        : startPoint(sx, sy), endPoint(ex, ey), sides(numSides) {
        std::cout << "Polygon initialized with " << sides << " sides." << std::endl;
    }

    void display() const {
        std::cout << "Start point: "; startPoint.display();
        std::cout << "End point: "; endPoint.display();
    }
};

int main() {
    Polygon p(1, 2, 3, 4, 5);  // Initializes start and end points and number of sides
    p.display();
    return 0;
}
