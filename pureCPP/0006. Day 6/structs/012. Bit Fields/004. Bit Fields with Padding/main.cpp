#include <iostream>

struct BitFieldPadding {
    unsigned int a : 3;
    unsigned int   : 5;  // 5 bits of padding
    unsigned int b : 4;
};

int main() {
    BitFieldPadding bfp;
    bfp.a = 5;
    bfp.b = 9;
    
    std::cout << "a: " << bfp.a << ", b: " << bfp.b << std::endl;
}
