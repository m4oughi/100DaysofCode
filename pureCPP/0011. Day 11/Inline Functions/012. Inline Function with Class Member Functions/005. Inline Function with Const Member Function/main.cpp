#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Inline const member function
    inline int getX() const {
        return x;
    }

    inline int getY() const {
        return y;
    }
};

int main() {
    Point p(10, 20);
    std::cout << "X: " << p.getX() << std::endl; // Output: X: 10
    std::cout << "Y: " << p.getY() << std::endl; // Output: Y: 20
    return 0;
}
