#include <iostream>

struct Point {
    int x;
    int y;

    void print() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point p = {10, 20};
    p.print(); // Access within a const member function
}
