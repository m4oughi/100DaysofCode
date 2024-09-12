#include <iostream>

struct MixedData {
    struct {
        int x;
        double y;
        char z;
    };
};

int main() {
    MixedData data;
    data.x = 100;
    data.y = 3.14;
    data.z = 'A';
    
    std::cout << "x: " << data.x << ", y: " << data.y << ", z: " << data.z << std::endl;
}
