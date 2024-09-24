#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

struct Circle {
    double radius;
};

void draw(Point p) {
    cout << "Drawing Point at (" << p.x << ", " << p.y << ")" << endl;
}

void draw(Circle c) {
    cout << "Drawing Circle with radius " << c.radius << endl;
}

int main() {
    Point p = {3, 4};
    Circle c = {5.5};
    
    draw(p);   // Calls draw(Point)
    draw(c);   // Calls draw(Circle)
    
    return 0;
}
