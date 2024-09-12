#include <iostream>

struct BitFieldOverflow {
    unsigned int a : 2;  // 2-bit field
    unsigned int b : 3;  // 3-bit field
};

int main() {
    BitFieldOverflow bfo;
    bfo.a = 3;  // Maximum value that can fit in 2 bits (11 in binary)
    bfo.b = 7;  // Maximum value that can fit in 3 bits (111 in binary)
    
    std::cout << "a: " << bfo.a << ", b: " << bfo.b << std::endl;
}
