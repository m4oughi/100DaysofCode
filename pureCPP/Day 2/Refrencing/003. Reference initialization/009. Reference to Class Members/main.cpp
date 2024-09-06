#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    int &refX = p.x;  // refX refers to p.x
    refX = 30;        // Changes p.x to 30

    return 0;
}