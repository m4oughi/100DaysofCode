#include <iostream>
#include <unordered_map>
#include <string>

struct Point {
    int x, y;

    bool operator==(const Point &other) const {
        return x == other.x && y == other.y;
    }
};

struct PointHash {
    std::size_t operator()(const Point &p) const {
        return std::hash<int>()(p.x) ^ (std::hash<int>()(p.y) << 1);
    }
};

int main() {
    std::unordered_map<Point, std::string, PointHash> points;
    points[{1, 2}] = "Point 1";
    points[{3, 4}] = "Point 2";

    for (const auto &entry : points) {
        std::cout << "(" << entry.first.x << ", " << entry.first.y << ") : " << entry.second << std::endl;
    }
    return 0;
}
