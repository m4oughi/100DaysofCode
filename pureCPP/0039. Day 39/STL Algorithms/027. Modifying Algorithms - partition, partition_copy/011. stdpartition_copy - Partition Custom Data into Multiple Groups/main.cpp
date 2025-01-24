#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

int main() {
    std::vector<Point> points = {{1, 2}, {-1, -2}, {3, 4}, {-3, -4}, {0, 0}};
    std::vector<Point> positive_points, negative_points;

    std::partition_copy(points.begin(), points.end(), std::back_inserter(positive_points), std::back_inserter(negative_points),
                        [](const Point& p) { return p.x > 0 && p.y > 0; });

    std::cout << "Positive points: ";
    for (const auto& point : positive_points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }

    std::cout << "\nNegative points: ";
    for (const auto& point : negative_points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}
