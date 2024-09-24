#include <iostream>

class Vector {
private:
    int x, y;

public:
    Vector(int xVal, int yVal) : x(xVal), y(yVal) {}

    const int& getX() const { return x; }
    const int& getY() const { return y; }
};

int main() {
    Vector v(10, 20);
    std::cout << v.getX() << std::endl;  // Output: 10
    // v.getX() = 30;  // Error: Cannot modify through const reference

    return 0;
}