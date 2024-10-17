#include <iostream>

int&& getRvalue() {
    return 10;  // Temporary Rvalue
}

int main() {
    int &&rref = getRvalue();
    std::cout << rref;  // Prints 10
}
