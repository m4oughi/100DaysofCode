#include <iostream>

struct Point {
    double x, y;
};

int main() {
    Point p1{1.0, 2.0}; // Aggregate initialization
    std::cout << "Point: (" << p1.x << ", " << p1.y << ")\n";
    return 0;
}
