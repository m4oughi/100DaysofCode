#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {10, 20};
    auto modifyPoint = [&p]() {
        p.x += 5;
        p.y += 10;
    };

    modifyPoint();
    std::cout << "Modified Point: (" << p.x << ", " << p.y << ")" << std::endl; // Outputs: Modified Point: (15, 30)
    return 0;
}
