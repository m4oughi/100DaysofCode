#include <iostream>
#include <vector>

struct Point {
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    std::vector<Point> points;

    // Memory is managed automatically; no need to worry about constructors/destructors
    points.emplace_back(1, 2);  // Constructs the Point directly in the vector
    points.emplace_back(3, 4);

    // No need to manually delete objects; vector handles it

    return 0;
}
