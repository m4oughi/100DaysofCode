#include <iostream>

#pragma pack(1)
struct Simple {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};

int main() {
    Simple s;
    std::cout << "Size of Simple with #pragma pack(1): " << sizeof(s) << " bytes" << std::endl;
}
