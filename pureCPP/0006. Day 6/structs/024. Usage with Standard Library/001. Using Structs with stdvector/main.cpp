#include <iostream>
#include <vector>

struct Point {
    int x, y;
};

int main() {
    std::vector<Point> points;
    points.push_back({1, 2});
    points.push_back({3, 4});

    for (const auto& point : points) {
        std::cout << "Point(" << point.x << ", " << point.y << ")\n";
    }

    return 0;
}
