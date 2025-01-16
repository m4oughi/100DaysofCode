#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};

int main() {
    std::vector<Point> set1 = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<Point> set2 = {{3, 4}, {5, 7}, {8, 9}};
    std::vector<Point> result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));

    std::cout << "Intersection of points: ";
    for (const auto& point : result) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }
    std::cout << "\n";

    return 0;
}
