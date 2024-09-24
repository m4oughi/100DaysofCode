#include <iostream>

struct AlignedBitFields {
    unsigned int a : 7;
    unsigned int b : 9;
    unsigned int c : 16;
};

int main() {
    AlignedBitFields abf;
    abf.a = 127;
    abf.b = 511;
    abf.c = 65535;
    
    std::cout << "a: " << abf.a << ", b: " << abf.b << ", c: " << abf.c << std::endl;
    std::cout << "Size of AlignedBitFields: " << sizeof(abf) << " bytes" << std::endl;
}
