#include <iostream>

struct Inner {
    int x;
    int y;
    
    Inner(int a, int b) : x(a), y(b) {} // Parameterized constructor
};

struct Outer {
    Inner point;
    
    Outer(int a, int b) : point(a, b) {} // Initializing nested struct
};

int main() {
    Outer o(10, 20);
    
    std::cout << "Outer point: (" << o.point.x << ", " << o.point.y << ")" << std::endl;
}
