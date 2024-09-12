#include <iostream>

struct Inner {
    int x;
    int y;
};

struct Outer {
    Inner point;
};

int main() {
    Outer o;
    o.point.x = 10;
    o.point.y = 20;
    
    std::cout << "Outer point: (" << o.point.x << ", " << o.point.y << ")" << std::endl;
}
