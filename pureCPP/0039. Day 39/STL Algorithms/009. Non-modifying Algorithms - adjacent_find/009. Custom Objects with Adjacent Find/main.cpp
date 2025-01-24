#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {3, 4}, {5, 6}};

    auto it = std::adjacent_find(points.begin(), points.end());

    if (it != points.end()) {
        std::cout << "First adjacent duplicate point: (" << it->x << ", " << it->y << ")" << std::endl;
    } else {
        std::cout << "No adjacent duplicate points found." << std::endl;
    }

    return 0;
}
