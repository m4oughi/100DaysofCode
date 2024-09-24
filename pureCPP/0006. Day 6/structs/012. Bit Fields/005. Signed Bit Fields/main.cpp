#include <iostream>

struct SignedBitField {
    signed int a : 4;  // Signed 4-bit field
};

int main() {
    SignedBitField sbf;
    sbf.a = -5;
    
    std::cout << "a: " << sbf.a << std::endl;
}
