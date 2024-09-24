#include <iostream>
#include <vector>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

int main() {
    std::vector<Point> points;
    points.push_back(Point(1, 2));
    points.push_back(Point(3, 4));
    points.push_back(Point(5, 6));

    std::cout << "Points in the vector:" << std::endl;
    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }

    return 0;
}
