#include <iostream>

struct Point {
    struct Coord {
        int x;
        int y;
    } coord;

    void setValues(int a, int b) {
        coord.x = a;
        coord.y = b;
    }

    void printValues() const {
        std::cout << "x: " << coord.x << ", y: " << coord.y << std::endl;
    }
};

int main() {
    Point p;
    p.setValues(10, 20);
    p.printValues();
}
