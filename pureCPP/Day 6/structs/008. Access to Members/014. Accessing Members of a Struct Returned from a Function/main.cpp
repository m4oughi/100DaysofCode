#include <iostream>

struct Point {
    int x;
    int y;
};

Point createPoint() {
    return {10, 20}; // Returning a struct
}

int main() {
    Point p = createPoint(); // Accessing members of returned struct
    std::cout << "x: " << p.x << ", y: " << p.y << std::endl;
}
