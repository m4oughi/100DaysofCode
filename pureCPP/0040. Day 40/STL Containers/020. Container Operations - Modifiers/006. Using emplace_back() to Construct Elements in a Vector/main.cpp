#include <iostream>
#include <vector>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

int main() {
    std::vector<Point> points;

    // Using emplace_back to construct Point objects in place
    points.emplace_back(10, 20);
    points.emplace_back(30, 40);

    std::cout << "Points: ";
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }

    return 0;
}
