#include <iostream>

struct Point {
    int x;
    int y;

    void print() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point p = {10, 20};
    void (Point::*funcPtr)() const = &Point::print;
    (p.*funcPtr)(); // Access using function pointer
}