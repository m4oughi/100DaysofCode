#include <iostream>
#include <vector>

struct Point {
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    std::vector<Point> points = { {1, 2}, {3, 4}, {5, 6} };

    Point* ptr = points.data();  // Get a pointer to the first element

    // Access and modify the second point using pointer arithmetic
    (ptr + 1)->x = 7;
    (ptr + 1)->y = 8;

    // Display the modified points
    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ") ";
    }

    return 0;
}
