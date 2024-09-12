#include <iostream>

struct MixedBitFields {
    unsigned int a : 4;  // 4-bit field
    unsigned char b : 2; // 2-bit field
    unsigned short c : 6;// 6-bit field
};

int main() {
    MixedBitFields mbf;
    mbf.a = 12;
    mbf.b = 2;
    mbf.c = 45;
    
    std::cout << "a: " << mbf.a << ", b: " << mbf.b << ", c: " << mbf.c << std::endl;
}
