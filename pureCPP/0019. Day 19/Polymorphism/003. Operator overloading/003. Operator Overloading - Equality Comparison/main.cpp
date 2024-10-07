#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a = 0, int b = 0) : x(a), y(b) {}

    bool operator == (const Point& p) const {
        return (x == p.x && y == p.y);
    }
};

int main() {
    Point p1(3, 4), p2(3, 4), p3(1, 2);

    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    } else {
        cout << "p1 is not equal to p2" << endl;
    }

    if (p1 == p3) {
        cout << "p1 is equal to p3" << endl;
    } else {
        cout << "p1 is not equal to p3" << endl;
    }

    return 0;
}
