#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    const Point p = {10, 20};
    // p.x = 30; // Error: cannot modify a const object
    std::cout << "x: " << p.x << ", y: " << p.y << std::endl;
}
