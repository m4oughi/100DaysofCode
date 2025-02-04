#include <iostream>
#include <unordered_set>

struct Point {
    int x, y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

struct PointHash {
    std::size_t operator()(const Point& p) const {
        return std::hash<int>()(p.x) ^ std::hash<int>()(p.y);
    }
};

int main() {
    std::unordered_multiset<Point, PointHash> points;
    points.insert({1, 2});
    points.insert({1, 2});
    points.insert({3, 4});

    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }

    return 0;
}
