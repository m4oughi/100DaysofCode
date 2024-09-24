#include <iostream>
#include <vector>

struct Point {
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    std::vector<Point> points;

    // Use emplace_back to construct elements in-place
    points.emplace_back(1, 2);
    points.emplace_back(3, 4);

    // Use emplace to insert elements at a specific position
    points.emplace(points.begin(), 0, 0);

    // Display the points
    for (const Point& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }

    return 0;
}
