#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    auto new_end = std::remove_if(points.begin(), points.end(), [](const Point& p) {
        return p.x % 2 == 0; // Remove points with even x
    });
    points.erase(new_end, points.end());

    std::cout << "Remaining points:\n";
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ")\n";
    }

    return 0;
}
