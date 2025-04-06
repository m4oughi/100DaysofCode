#include <iostream>

struct Point {
    int x, y;

    constexpr Point(int a, int b) : x(a), y(b) {} // constexpr constructor
};

int main() {
    constexpr Point p1(10, 20);  // Compile-time object creation
    std::cout << "Point: (" << p1.x << ", " << p1.y << ")\n";
    return 0;
}
