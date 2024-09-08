#include <iostream>

struct MyBitfield {
    const volatile unsigned int bitfield : 8; // 8-bit bitfield
};

int main() {
    MyBitfield field = { 700 }; // Assigning a value

    std::cout << field.bitfield << std::endl; // Prints 700, showing the bitfield value
}
