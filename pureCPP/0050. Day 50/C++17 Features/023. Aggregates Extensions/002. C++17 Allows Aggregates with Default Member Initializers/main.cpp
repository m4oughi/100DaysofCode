#include <iostream>

struct Point {
    double x = 0.0, y = 0.0;
};

int main() {
    Point p1{};      // Uses default values: (0.0, 0.0)
    Point p2{1.5};   // Initializes x = 1.5, y = default (0.0)
    Point p3{3.0, 4.0}; // Both values explicitly set

    std::cout << "p1: (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "p2: (" << p2.x << ", " << p2.y << ")\n";
    std::cout << "p3: (" << p3.x << ", " << p3.y << ")\n";
    return 0;
}
