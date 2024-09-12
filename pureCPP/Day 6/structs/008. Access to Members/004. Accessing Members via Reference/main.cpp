#include <iostream>

struct Point {
    int x;
    int y;
};

void modifyPoint(Point& p) {
    p.x = 100; // Access using reference
    p.y = 200; // Access using reference
}

int main() {
    Point p;
    modifyPoint(p);
}
