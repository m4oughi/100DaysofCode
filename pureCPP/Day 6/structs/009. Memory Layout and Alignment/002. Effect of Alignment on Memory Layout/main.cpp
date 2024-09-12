#include <iostream>

struct Simple {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};

int main() {
    Simple s;
    std::cout << "Size of Simple: " << sizeof(s) << " bytes" << std::endl;
}
