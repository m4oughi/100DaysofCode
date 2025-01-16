#include <iostream>
#include <utility>

using Point = std::pair<int, int>;

Point movePoint(const Point& point, int dx, int dy) {
    return {point.first + dx, point.second + dy};
}

int main() {
    Point origin = {0, 0};
    Point newPoint = movePoint(origin, 5, 10);

    std::cout << "Original Point: (" << origin.first << ", " << origin.second << ")\n";
    std::cout << "Moved Point: (" << newPoint.first << ", " << newPoint.second << ")\n";

    return 0;
}
