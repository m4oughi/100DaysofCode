#include <iostream>

class Point {
public:
    constexpr Point(int x, int y) : x_(x), y_(y) {}

    constexpr int getX() const { return x_; }
    constexpr int getY() const { return y_; }

private:
    int x_;
    int y_;
};

int main() {
    constexpr Point p(10, 20);  // ✅ Compile-time object
    std::cout << "X: " << p.getX() << ", Y: " << p.getY() << '\n';  
}
