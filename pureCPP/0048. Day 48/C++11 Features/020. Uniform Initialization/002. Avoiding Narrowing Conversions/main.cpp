#include <iostream>

int main() {
    // int x = 3.14; // Compiles, but leads to data loss
    // int y{3.14};  // Error: Narrowing conversion not allowed

    double z{3.14}; // Valid
    std::cout << "z: " << z << std::endl;

    return 0;
}
