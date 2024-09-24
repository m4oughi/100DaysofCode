#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    Point* pPtr = points;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Point " << i << ": (" << pPtr->x << ", " << pPtr->y << ")" << std::endl;
        pPtr++;
    }
}
