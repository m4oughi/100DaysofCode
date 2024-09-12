#include <iostream>
#pragma pack(1) // Packing structure to 1-byte boundary

struct PackedBitFields {
    unsigned int a : 3;
    unsigned int b : 5;
    unsigned char c;
};

int main() {
    PackedBitFields pbf;
    pbf.a = 7;
    pbf.b = 31;
    pbf.c = 'A';
    
    std::cout << "a: " << pbf.a << ", b: " << pbf.b << ", c: " << pbf.c << std::endl;
    std::cout << "Size of PackedBitFields: " << sizeof(pbf) << " bytes" << std::endl;
}
