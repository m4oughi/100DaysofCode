#include <iostream>

struct Point {
    int x, y;
};

void movePoint(Point& p) {
    p.x += 10;
    p.y += 10;
}

int main() {
    Point pt = {1, 2};
    movePoint(pt);
    std::cout << "After moving, Point: (" << pt.x << ", " << pt.y << ")" << std::endl;  // Original struct is changed
    return 0;
}
