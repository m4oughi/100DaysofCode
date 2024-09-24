#include <iostream>

struct Inner {
    int x;
    int y;
};

struct Outer {
    Inner point;
};

int main() {
    Outer o = { {10, 20} }; // Direct initialization of nested struct
    
    std::cout << "Outer point: (" << o.point.x << ", " << o.point.y << ")" << std::endl;
}
