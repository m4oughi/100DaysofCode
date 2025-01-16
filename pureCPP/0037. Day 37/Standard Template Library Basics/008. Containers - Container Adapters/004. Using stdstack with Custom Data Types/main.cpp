#include <iostream>
#include <stack>

struct Point {
    int x, y;
};

int main() {
    std::stack<Point> points;
    points.push({1, 2});
    points.push({3, 4});

    while (!points.empty()) {
        Point p = points.top();
        std::cout << "(" << p.x << ", " << p.y << ")\n";
        points.pop();
    }
    return 0;
}
