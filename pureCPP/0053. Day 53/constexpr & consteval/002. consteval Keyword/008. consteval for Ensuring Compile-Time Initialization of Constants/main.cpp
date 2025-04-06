#include <iostream>

struct Point {
    int x, y;
    consteval Point(int a, int b) : x(a), y(b) {}
};

int main() {
    constexpr Point p(3, 4); // Must be evaluated at compile-time
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
    return 0;
}
