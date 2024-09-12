#include <iostream>

struct MixedAlignment {
    char a;     // 1 byte
    double b;   // 8 bytes, may be aligned to 8-byte boundary
    int c;      // 4 bytes, may be aligned to 4-byte boundary
};

int main() {
    MixedAlignment m;
    std::cout << "Size of MixedAlignment: " << sizeof(m) << " bytes" << std::endl;
}
