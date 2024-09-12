#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the addition operator
    Point operator+(const Point& other) const {
        return {x + other.x, y + other.y};
    }
};

int main() {


    return 0;
}