#include <iostream>

struct BitFieldStruct {
    char a : 1;
    char b : 2;
    char c : 5;
};

int main() {
    BitFieldStruct bfs = {1, 2, 3};
    std::cout << "Size of BitFieldStruct: " << sizeof(bfs) << " bytes" << std::endl;
    std::cout << "a: " << (int)bfs.a << ", b: " << (int)bfs.b << ", c: " << (int)bfs.c << std::endl;
}
