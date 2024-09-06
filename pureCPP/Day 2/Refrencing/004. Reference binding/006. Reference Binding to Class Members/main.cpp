#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    int &refX = p.x;  // refX binds to p.x
    refX = 50;        // Changes p.x to 50

    return 0;
}