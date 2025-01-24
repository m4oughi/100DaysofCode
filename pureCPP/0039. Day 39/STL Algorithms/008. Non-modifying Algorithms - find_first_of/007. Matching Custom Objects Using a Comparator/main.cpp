#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

bool comparePoints(const Point& a, const Point& b) {
    return a.x == b.x && a.y == b.y;
}

int main() {
    std::vector<Point> points1 = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<Point> points2 = {{0, 0}, {3, 4}, {7, 8}};

    auto it = std::find_first_of(points1.begin(), points1.end(), points2.begin(), points2.end(), comparePoints);

    if (it != points1.end()) {
        std::cout << "First matching point found: (" << it->x << ", " << it->y << ")" << std::endl;
    } else {
        std::cout << "No matching points found." << std::endl;
    }

    return 0;
}
