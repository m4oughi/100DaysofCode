#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p1{10, 20}; // Uniform initialization

    std::cout << "Point: (" << p1.x << ", " << p1.y << ")" << std::endl;
    return 0;
}
