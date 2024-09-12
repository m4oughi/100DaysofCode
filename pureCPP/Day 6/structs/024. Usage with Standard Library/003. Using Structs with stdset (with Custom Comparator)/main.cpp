#include <iostream>
#include <set>

struct Point {
    int x, y;

    // Custom comparator for sorting Points
    bool operator<(const Point& other) const {
        return (x == other.x) ? (y < other.y) : (x < other.x);
    }
};

int main() {
    std::set<Point> points;
    points.insert({1, 2});
    points.insert({3, 4});
    points.insert({1, 5});

    for (const auto& point : points) {
        std::cout << "Point(" << point.x << ", " << point.y << ")\n";
    }

    return 0;
}
