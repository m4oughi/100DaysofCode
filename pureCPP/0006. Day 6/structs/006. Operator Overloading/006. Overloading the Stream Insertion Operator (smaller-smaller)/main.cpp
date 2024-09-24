#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {


    return 0;
}