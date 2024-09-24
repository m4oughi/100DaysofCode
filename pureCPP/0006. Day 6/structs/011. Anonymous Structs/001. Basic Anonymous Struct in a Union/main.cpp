#include <iostream>

union Data {
    struct {
        int x;
        int y;
    };
};

int main() {
    Data d;
    d.x = 10;
    d.y = 20;
    
    std::cout << "x: " << d.x << ", y: " << d.y << std::endl;
}
