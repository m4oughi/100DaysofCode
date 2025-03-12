#include <iostream>
#include <unordered_set>

struct Point {
    int x, y;
    
    bool operator==(const Point &other) const {
        return x == other.x && y == other.y;
    }
};

// Custom Hash Function
struct PointHash {
    std::size_t operator()(const Point &p) const {
        return std::hash<int>()(p.x) ^ std::hash<int>()(p.y);
    }
};

int main() {
    std::unordered_set<Point, PointHash> points = {{1, 2}, {3, 4}, {5, 6}};

    points.insert({7, 8});

    for (const auto &p : points) {
        std::cout << "(" << p.x << ", " << p.y << ")\n";
    }

    return 0;
}
