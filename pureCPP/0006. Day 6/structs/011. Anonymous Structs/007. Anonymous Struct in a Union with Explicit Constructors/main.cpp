#include <iostream>

union Data {
    struct {
        int x;
        double y;
    };
    
    Data(int a, double b) : x(a), y(b) {}
};

int main() {
    Data d(5, 3.5);
    
    std::cout << "x: " << d.x << ", y: " << d.y << std::endl;
}
