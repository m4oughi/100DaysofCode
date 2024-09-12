#include <iostream>

struct Padded {
    char a;  // 1 byte
    char b;  // 1 byte
    int c;   // 4 bytes
};

int main() {
    Padded s;
    std::cout << "Size of Padded: " << sizeof(s) << " bytes" << std::endl;
}
