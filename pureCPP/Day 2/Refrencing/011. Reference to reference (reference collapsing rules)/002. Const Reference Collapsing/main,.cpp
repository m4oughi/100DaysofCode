#include <iostream>

int main() {
    int &&rref1 = 30;  // r-value reference to temporary
    // int && &rref2 = rref1;  // r-value reference to r-value reference

    // std::cout << rref2 << std::endl;  // Output: 30

    return 0;
}