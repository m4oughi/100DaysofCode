#include <iostream>

class Point {
public:
    constexpr Point(int xVal, int yVal) : x(xVal), y(yVal) {}
    constexpr int getX() const { return x; }
    constexpr int getY() const { return y; }

private:
    int x, y;
};

int main() {
    constexpr Point p(3, 4); // Compile-time construction
    std::cout << p.getX() << " " << p.getY() << std::endl; // Prints 3 4
}
