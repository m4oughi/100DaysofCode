#include <iostream>

int main() {
    int &&rref = 5;  // rref is an Rvalue reference to 5
    std::cout << rref;  // Prints 5
    rref = 10;  // Modifying the Rvalue reference

    return 0;
}