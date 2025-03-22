#include <iostream>
#include <cstddef> // For std::byte

int main() {
    std::byte b1{0b1100};  
    std::byte b2{0b1010};  

    std::byte result = b1 | b2; // Bitwise OR

    std::cout << "Bitwise OR operation completed!\n";
    return 0;
}
