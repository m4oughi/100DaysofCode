#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the assignment operator
    Point& operator=(const Point& other) {
        x = other.x;
        y = other.y;
        return *this;
    }
};

int main() {


    return 0;
}