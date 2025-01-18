#include <iostream>
#include <vector>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

int main() {
    std::vector<Point> points = {{1, 2}, {3, 4}, {5, 6}};

    std::cout << "Accessing Point coordinates: ";
    for (auto it = points.begin(); it != points.end(); ++it) {
        std::cout << "(" << it->x << ", " << it->y << ") ";
    }

    return 0;
}
