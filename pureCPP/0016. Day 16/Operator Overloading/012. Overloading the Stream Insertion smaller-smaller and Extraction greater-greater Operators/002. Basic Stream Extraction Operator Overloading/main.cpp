#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() : x(0), y(0) {}

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, Point& pt) {
        is >> pt.x >> pt.y;
        return is;
    }

    // Overload stream insertion operator for printing
    friend ostream& operator<<(ostream& os, const Point& pt) {
        os << "(" << pt.x << ", " << pt.y << ")";
        return os;
    }
};

int main() {
    Point pt;
    cout << "Enter x and y coordinates: ";
    cin >> pt;
    cout << "You entered: " << pt << endl;  // Example Input: 3 4, Output: (3, 4)
    return 0;
}
