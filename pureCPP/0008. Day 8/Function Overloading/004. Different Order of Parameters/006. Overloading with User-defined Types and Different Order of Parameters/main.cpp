#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void move(Point p, double d) {
    cout << "Moving Point (" << p.x << ", " << p.y << ") by " << d << " units" << endl;
}

void move(double d, Point p) {
    cout << "Moving " << d << " units from Point (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p = {3, 4};
    move(p, 5.5);   // Calls move(Point, double)
    move(5.5, p);   // Calls move(double, Point)
    return 0;
}
