#include <iostream>

#pragma pack(push, 1)
struct Packed {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
#pragma pack(pop)

int main() {
    Packed p;
    std::cout << "Size of Packed: " << sizeof(p) << " bytes" << std::endl;
}
