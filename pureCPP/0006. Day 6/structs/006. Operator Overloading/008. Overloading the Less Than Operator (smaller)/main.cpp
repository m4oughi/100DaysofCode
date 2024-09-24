#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the less than operator
    bool operator<(const Point& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};

int main() {


    return 0;
}