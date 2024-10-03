#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Friend function for overloading >>
    friend istream& operator>>(istream& input, Point& p);

    // Friend function for overloading <<
    friend ostream& operator<<(ostream& output, const Point& p);
};

// Overloading >> using a friend function
istream& operator>>(istream& input, Point& p) {
    input >> p.x >> p.y;
    return input;
}

// Overloading << using a friend function
ostream& operator<<(ostream& output, const Point& p) {
    output << "(" << p.x << ", " << p.y << ")";
    return output;
}

int main() {
    Point p;
    cout << "Enter point coordinates (x y): ";
    cin >> p;  // Using overloaded >>
    cout << "You entered: " << p << endl;  // Using overloaded <<
    return 0;
}
