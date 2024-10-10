#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int a, int b) : x(a), y(b) {}

    // Friend function that accesses multiple private members
    friend void printSum(Point p1, Point p2);
};

void printSum(Point p1, Point p2) {
    cout << "Sum of X coordinates: " << p1.x + p2.x << endl;
    cout << "Sum of Y coordinates: " << p1.y + p2.y << endl;
}

int main() {
    Point point1(3, 4), point2(7, 8);
    printSum(point1, point2);  // Friend function with multiple parameters
    return 0;
}
