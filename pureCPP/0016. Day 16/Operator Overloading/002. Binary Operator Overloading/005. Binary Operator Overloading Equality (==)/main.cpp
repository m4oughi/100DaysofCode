#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(5, 10), p2(5, 10), p3(3, 7);
    cout << (p1 == p2) << endl;  // Output: 1 (true)
    cout << (p1 == p3) << endl;  // Output: 0 (false)
    return 0;
}
