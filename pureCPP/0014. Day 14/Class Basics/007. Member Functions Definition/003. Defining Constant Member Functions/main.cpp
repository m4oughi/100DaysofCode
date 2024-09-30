#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int xPos, int yPos) : x(xPos), y(yPos) {}

    // Constant member function ensures it cannot modify class members
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

int main() {
    Point p(3, 4);
    cout << "X: " << p.getX() << ", Y: " << p.getY() << endl;
    return 0;
}
