#include <iostream>

struct Point {
    constexpr Point(int x, int y) : x(x), y(y) {}
    int x, y;
};

int main() {
    constexpr Point p(10, 20);  // ✅ Compile-time object
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
}
