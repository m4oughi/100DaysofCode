#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

Point createPoint() {
    Point p(5, 10);  // Creating a point
    return p;  // Returning the point object by value
}

int main() {
    Point p = createPoint();  // Storing the returned object
    p.display();

    return 0;
}
