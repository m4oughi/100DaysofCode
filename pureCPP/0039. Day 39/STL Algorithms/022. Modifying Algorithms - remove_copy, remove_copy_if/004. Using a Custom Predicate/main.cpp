#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    std::vector<Point> result;

    std::remove_copy_if(points.begin(), points.end(), std::back_inserter(result), [](const Point& p) {
        return p.x % 2 == 0; // Exclude points with even x
    });

    std::cout << "Points after remove_copy_if:\n";
    for (const auto& p : result) {
        std::cout << "(" << p.x << ", " << p.y << ")\n";
    }

    return 0;
}
