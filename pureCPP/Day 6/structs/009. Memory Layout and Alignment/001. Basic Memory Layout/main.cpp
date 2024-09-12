#include <iostream>

struct Simple {
    char a; // 1 byte
    int b;  // 4 bytes
};

int main() {
    Simple s;
    std::cout << "Size of Simple: " << sizeof(s) << " bytes" << std::endl;
}
