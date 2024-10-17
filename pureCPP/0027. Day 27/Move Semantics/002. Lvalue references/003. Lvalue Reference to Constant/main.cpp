#include <iostream>

int main() {
    const int x = 100;
    const int &ref = x;  // ref is a constant Lvalue reference
    // ref = 200;  // Error: Cannot modify a constant Lvalue reference
    std::cout << ref;  // Prints 100

    return 0;
}