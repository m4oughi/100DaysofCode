#include <iostream>

// Struct definition
struct Point {
    int x, y;
};

// Function declaration returning a struct
Point createPoint(int a, int b);

int main() {
    Point p = createPoint(10, 20);  // Function call returning struct
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;
    return 0;
}

// Function definition returning a struct
Point createPoint(int a, int b) {
    Point p;
    p.x = a;
    p.y = b;
    return p;  // Return struct
}
