#include <iostream>

int main() {
    int x = 10;
    const int &ref = x;  // ref is a const reference to x
    // ref = 20;  // Error: Cannot modify a const reference
    std::cout << ref << std::endl;  // Output: 10

    return 0;
}