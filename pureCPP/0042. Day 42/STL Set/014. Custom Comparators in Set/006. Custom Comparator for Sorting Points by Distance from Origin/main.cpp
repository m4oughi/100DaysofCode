#include <iostream>
#include <set>
#include <cmath>

struct Point {
    int x, y;
};

struct DistanceCompare {
    bool operator()(const Point& a, const Point& b) const {
        return std::sqrt(a.x * a.x + a.y * a.y) < std::sqrt(b.x * b.x + b.y * b.y);
    }
};

int main() {
    std::set<Point, DistanceCompare> points = {{3, 4}, {1, 1}, {0, 2}, {6, 8}};

    std::cout << "Points sorted by distance from origin: ";
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}
