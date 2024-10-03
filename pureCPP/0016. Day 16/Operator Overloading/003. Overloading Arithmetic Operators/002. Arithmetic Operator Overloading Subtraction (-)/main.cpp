#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    Point operator-(const Point& other) {
        return Point(x - other.x, y - other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20), p2(5, 15);
    Point p3 = p1 - p2;
    p3.display();  // Output: (5, 5)
    return 0;
}
