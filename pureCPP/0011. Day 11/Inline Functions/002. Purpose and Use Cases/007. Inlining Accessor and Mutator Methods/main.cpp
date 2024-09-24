#include <iostream>

class Point {
public:
    // Inline accessor and mutator methods
    inline void setX(int x) { xPos = x; }
    inline void setY(int y) { yPos = y; }
    inline int getX() const { return xPos; }
    inline int getY() const { return yPos; }

private:
    int xPos, yPos;
};

int main() {
    Point p;
    p.setX(10);
    p.setY(20);
    std::cout << "X: " << p.getX() << ", Y: " << p.getY() << std::endl; // Output: X: 10, Y: 20
    return 0;
}
