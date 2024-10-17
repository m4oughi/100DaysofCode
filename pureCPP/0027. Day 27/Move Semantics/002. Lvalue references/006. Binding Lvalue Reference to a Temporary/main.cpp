#include <iostream>

int main() {
    const int& ref = 5;  // Lvalue reference bound to a temporary Rvalue
    std::cout << ref;    // Prints 5


    return 0;
}