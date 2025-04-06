#include <iostream>

struct Point {
    constexpr Point(int a, int b) : x(a), y(b) {}
    int x, y;
};

constexpr Point getPoint() {
    return Point(10, 20);
}

int main() {
    constexpr Point p = getPoint();
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
    return 0;
}
