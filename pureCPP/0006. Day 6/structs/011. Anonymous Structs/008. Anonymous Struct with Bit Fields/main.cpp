#include <iostream>

struct BitFieldStruct {
    struct {
        unsigned int x : 3;
        unsigned int y : 5;
    };
};

int main() {
    BitFieldStruct bfs;
    bfs.x = 5;
    bfs.y = 16;
    
    std::cout << "x: " << bfs.x << ", y: " << bfs.y << std::endl;
}
