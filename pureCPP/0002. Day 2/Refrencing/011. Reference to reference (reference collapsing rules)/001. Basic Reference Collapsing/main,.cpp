#include <iostream>

int main() {
    int value = 10;
    int &ref1 = value;  // l-value reference to value
    // int & &ref2 = ref1;  // l-value reference to l-value reference

    // std::cout << ref2 << std::endl;  // Output: 10

    return 0;
}