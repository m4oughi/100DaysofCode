#include <iostream>

int main() {
    int x = 10;
    int &ref = x;  // ref is an Lvalue reference to x
    ref = 20;      // Modifying the original Lvalue x through ref
    std::cout << x;  // Prints 20

    return 0;
}