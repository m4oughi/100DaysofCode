#include <iostream>

int main() {
    int z = 60;
    int *ptr = &z;
    int &aliasPtr = *ptr;  // aliasPtr aliases the value pointed to by ptr

    aliasPtr = 70;  // Modify z through aliasPtr
    std::cout << z << std::endl;  // Output: 70

    return 0;
}