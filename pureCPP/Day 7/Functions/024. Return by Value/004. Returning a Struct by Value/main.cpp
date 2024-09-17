#include <iostream>

struct Point {
    int x, y;
};

Point createPoint(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;  // Return by value
}

int main() {
    Point p = createPoint(10, 20);
    std::cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << std::endl;  // Output: Point coordinates: (10, 20)
    return 0;
}
