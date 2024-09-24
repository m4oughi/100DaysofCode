#include <iostream>

// Struct definition
struct Point {
    int x, y;
};

// Function declaration with struct parameter
void printPoint(Point p);

int main() {
    Point pt = {10, 20};
    printPoint(pt);  // Function call with struct
    return 0;
}

// Function definition with struct parameter
void printPoint(Point p) {
    std::cout << "Point (" << p.x << ", " << p.y << ")" << std::endl;
}
