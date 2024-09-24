#include <iostream>

struct Inner {
    int x;
    int y;
    
    Inner() : x(0), y(0) {} // Default constructor
};

struct Outer {
    Inner point;
};

int main() {
    Outer o;
    
    std::cout << "Outer point: (" << o.point.x << ", " << o.point.y << ")" << std::endl;
}
