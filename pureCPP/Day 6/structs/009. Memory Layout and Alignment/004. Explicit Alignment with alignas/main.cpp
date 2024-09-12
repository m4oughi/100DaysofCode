#include <iostream>

struct Aligned {
    char a;          // 1 byte
    alignas(8) int b; // 4 bytes, aligned to 8-byte boundary
};

int main() {
    Aligned s;
    std::cout << "Size of Aligned: " << sizeof(s) << " bytes" << std::endl;
    std::cout << "Address of a: " << &s.a << std::endl;
    std::cout << "Address of b: " << &s.b << std::endl;
}
