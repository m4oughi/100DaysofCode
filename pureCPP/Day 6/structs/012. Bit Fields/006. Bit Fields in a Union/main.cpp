#include <iostream>

union BitFieldUnion {
    struct {
        unsigned int a : 4;
        unsigned int b : 4;
    };
    unsigned char byte;
};

int main() {
    BitFieldUnion bfu;
    bfu.byte = 0xAB; // Set byte value to 0xAB (10101011 in binary)
    
    std::cout << "a: " << bfu.a << ", b: " << bfu.b << std::endl;
}
