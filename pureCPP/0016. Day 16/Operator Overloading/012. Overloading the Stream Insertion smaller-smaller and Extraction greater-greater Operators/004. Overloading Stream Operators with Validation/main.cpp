#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() : x(0), y(0) {}

    // Overload the stream extraction operator with validation
    friend istream& operator>>(istream& is, Point& pt) {
        is >> pt.x >> pt.y;
        if (!is) {  // If input fails
            pt.x = pt.y = 0;  // Set default values
            cerr << "Invalid input! Resetting to (0, 0)." << endl;
        }
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Point& pt) {
        os << "(" << pt.x << ", " << pt.y << ")";
        return os;
    }
};

int main() {
    Point pt;
    cout << "Enter x and y coordinates: ";
    cin >> pt;
    cout << "You entered: " << pt << endl;
    return 0;
}
