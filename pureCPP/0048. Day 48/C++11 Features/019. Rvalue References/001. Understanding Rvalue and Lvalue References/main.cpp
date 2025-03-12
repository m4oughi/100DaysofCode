#include <iostream>

int main() {
    int x = 10;  // x is an lvalue
    int& lref = x;  // lvalue reference

    // int& ref = 20; // Error: Cannot bind an lvalue reference to an rvalue

    int&& rref = 20; // rvalue reference
    std::cout << rref << std::endl; 

    return 0;
}
