#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;

    bool operator<(const Point& other) const {
        return (x * x + y * y) < (other.x * other.x + other.y * other.y);
    }
};

int main() {
    std::vector<Point> heap = {{1, 2}, {3, 4}, {5, 6}};
    std::make_heap(heap.begin(), heap.end());

    heap.push_back({0, 1}); // Add new point
    std::push_heap(heap.begin(), heap.end());

    std::cout << "Points in the heap (sorted by distance from origin):\n";
    for (const auto& point : heap) {
        std::cout << "(" << point.x << ", " << point.y << ")\n";
    }

    return 0;
}
