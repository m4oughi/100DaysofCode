#include <iostream>

struct Point {
    constexpr Point(int a, int b) : x(a), y(b) {}
    int x, y;
};

int main() {
    constexpr Point p(3, 4);
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
    return 0;
}
