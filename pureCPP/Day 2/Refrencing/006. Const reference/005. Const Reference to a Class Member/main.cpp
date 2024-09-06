#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    const int &refX = p.x;  // Const reference to p.x
    std::cout << refX << std::endl;  // Output: 10
    // refX = 30;  // Error: Cannot modify p.x through refX
    p.x = 30;  // Direct modification of p.x is allowed
    std::cout << refX << std::endl;  // Output: 30

    return 0;
}