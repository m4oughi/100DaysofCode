#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    int &refX = p.x;  // Mutable reference to p.x
    refX = 50;  // Modifies p.x directly
    std::cout << p.x << std::endl;  // Output: 50

    return 0;
}