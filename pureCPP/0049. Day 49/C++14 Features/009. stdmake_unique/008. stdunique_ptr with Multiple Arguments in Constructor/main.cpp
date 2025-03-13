#include <iostream>
#include <memory>

class Point {
public:
    Point(int x, int y) : x(x), y(y) {}
    void show() { std::cout << "Point: (" << x << ", " << y << ")\n"; }
private:
    int x, y;
};

int main() {
    std::unique_ptr<Point> p = std::make_unique<Point>(10, 20);
    p->show(); // Output: Point: (10, 20)
    return 0;
}
