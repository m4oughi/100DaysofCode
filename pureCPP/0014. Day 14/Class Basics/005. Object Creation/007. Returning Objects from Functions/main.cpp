#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int xPos, int yPos) : x(xPos), y(yPos) {}

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

Point createPoint(int x, int y) {
    return Point(x, y);  // Returning an object from a function
}

int main() {
    Point p1 = createPoint(5, 10);  // Creating object from returned value
    p1.display();
    return 0;
}
