#include <iostream>

struct Point {
    int x, y;
};

void movePoint(Point &p, int deltaX, int deltaY) {
    p.x += deltaX;
    p.y += deltaY;
}

int main() {
    Point pt = {10, 20};
    movePoint(pt, 5, -5);  // Move point by (5, -5)
    std::cout << "x: " << pt.x << ", y: " << pt.y << std::endl;  // Output: x: 15, y: 15

    return 0;
}