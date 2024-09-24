#include <iostream>

struct Container {
    struct {
        int x;
        struct {
            double y;
            char z;
        };
    };
};

int main() {
    Container c;
    c.x = 10;
    c.y = 3.14;
    c.z = 'B';
    
    std::cout << "x: " << c.x << ", y: " << c.y << ", z: " << c.z << std::endl;
}
