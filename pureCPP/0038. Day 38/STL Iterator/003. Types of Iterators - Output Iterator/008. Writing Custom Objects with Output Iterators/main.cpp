#include <iostream>
#include <vector>
#include <iterator>

struct Point {
    int x, y;
};

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}};

    std::ostream_iterator<Point> output(std::cout, " ");
    for (const auto& point : points) {
        *output = point;
    }

    return 0;
}
