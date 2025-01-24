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
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}};
    Point target = {3, 4};

    auto it = std::find(points.begin(), points.end(), target);

    if (it != points.end()) {
        std::cout << "Point found: (" << it->x << ", " << it->y << ")" << std::endl;
    } else {
        std::cout << "Point not found." << std::endl;
    }

    return 0;
}
