#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

int main() {
    std::vector<Point> points;
    int x = 0, y = 0;

    std::generate_n(std::back_inserter(points), 5, [&]() {
        return Point{x++, y += 2};
    });

    std::cout << "Generated points:\n";
    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ")\n";
    }

    return 0;
}
