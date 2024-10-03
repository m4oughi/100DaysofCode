#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Point& pt) {
        os << "(" << pt.x << ", " << pt.y << ")";
        return os;
    }
};

int main() {
    Point pt(3, 4);
    cout << pt << endl;  // Output: (3, 4)
    return 0;
}
