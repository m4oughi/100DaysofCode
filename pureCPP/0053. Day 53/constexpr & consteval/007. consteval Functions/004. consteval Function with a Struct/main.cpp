#include <iostream>

struct Point {
    int x, y;
};

consteval Point createPoint(int a, int b) {
    return Point{a, b};
}

int main() {
    constexpr Point p = createPoint(3, 4);
    std::cout << "Point: (" << p.x << ", " << p.y << ")\n";
    return 0;
}
