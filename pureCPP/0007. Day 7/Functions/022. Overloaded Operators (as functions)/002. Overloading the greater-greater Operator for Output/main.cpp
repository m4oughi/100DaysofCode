#include <iostream>

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "Point(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p(5, 10);
    std::cout << p << std::endl;  // Uses overloaded << operator
    return 0;
}
