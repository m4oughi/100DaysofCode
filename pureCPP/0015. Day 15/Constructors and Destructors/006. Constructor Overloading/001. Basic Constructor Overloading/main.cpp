#include <iostream>

class Point {
private:
    int x, y;
public:
    // Default constructor
    Point() : x(0), y(0) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {
        std::cout << "Parameterized constructor called." << std::endl;
    }

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1;           // Calls default constructor
    Point p2(5, 10);     // Calls parameterized constructor
    p1.display();
    p2.display();
    return 0;
}
