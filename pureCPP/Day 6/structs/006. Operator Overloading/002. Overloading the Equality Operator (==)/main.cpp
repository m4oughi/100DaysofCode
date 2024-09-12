#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the equality operator
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

int main() {


    return 0;
}