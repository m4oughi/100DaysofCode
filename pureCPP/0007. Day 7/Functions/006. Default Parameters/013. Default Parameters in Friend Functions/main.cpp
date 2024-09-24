#include <iostream>

class Point {
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Friend function with default parameters
    friend void printPoint(const Point& p, bool showCoordinates = true);

private:
    int x, y;
};

// Friend function definition with default parameter
void printPoint(const Point& p, bool showCoordinates) {
    if (showCoordinates) {
        std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;
    } else {
        std::cout << "Point exists!" << std::endl;
    }
}

int main() {
    Point p1(10, 20);
    printPoint(p1);             // Uses default to show coordinates
    printPoint(p1, false);      // Skips showing coordinates
    return 0;
}
