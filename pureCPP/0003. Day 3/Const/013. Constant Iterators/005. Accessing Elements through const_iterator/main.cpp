#include <vector>
#include <iostream>

struct Point {
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    std::vector<Point> points = {Point(1, 2), Point(3, 4), Point(5, 6)};
    std::vector<Point>::const_iterator it;

    for (it = points.cbegin(); it != points.cend(); ++it) {
        std::cout << "x: " << it->x << ", y: " << it->y << std::endl;
    }
}
