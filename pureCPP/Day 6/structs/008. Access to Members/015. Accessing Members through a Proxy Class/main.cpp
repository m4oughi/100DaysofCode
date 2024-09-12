#include <iostream>

struct Point {
    int x;
    int y;
};

class PointProxy {
    Point& p;
public:
    PointProxy(Point& point) : p(point) {}

    int& x() { return p.x; }
    int& y() { return p.y; }
};

int main() {


    return 0;
}