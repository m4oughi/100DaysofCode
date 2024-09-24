#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p = {5, 10};
    auto printPoint = [p]() {
        std::cout << "Captured Point (x, y): (" << p.x << ", " << p.y << ")" << std::endl;
    };

    p.x = 15;
    printPoint(); // Outputs: Captured Point (x, y): (5, 10)
    return 0;
}
