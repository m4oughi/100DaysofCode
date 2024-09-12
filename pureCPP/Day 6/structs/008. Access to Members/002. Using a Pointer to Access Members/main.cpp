#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p;
    Point* pPtr = &p;
    pPtr->x = 10; // Access using pointer
    pPtr->y = 20; // Access using pointer
}
