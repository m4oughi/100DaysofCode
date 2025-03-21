#include <iostream>
#include <unordered_map>

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
    std::unordered_multimap<Point, std::string, PointHash> pointMap;
    pointMap.insert({{1, 2}, "A"});
    pointMap.insert({{1, 2}, "B"});
    
    for (const auto& pair : pointMap) {
        std::cout << "(" << pair.first.x << ", " << pair.first.y << "): " << pair.second << "\n";
    }

    return 0;
}
