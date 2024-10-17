#include <iostream>

int main() {
    int &&rref = 10;  // rref is an Rvalue reference to 10
    std::cout << rref;  // Prints 10
    rref = 20;  // Modifies the Rvalue reference
    std::cout << rref;  // Prints 20

    return 0;
}