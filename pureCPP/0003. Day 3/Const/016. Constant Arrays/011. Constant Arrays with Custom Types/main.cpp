#include <iostream>

struct Point {
    int x, y;
};

int main() {
    const Point points[] = {{0, 0}, {1, 1}, {2, 2}};

    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ") "; // Prints (0, 0) (1, 1) (2, 2)
    }
}
