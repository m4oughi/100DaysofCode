#include <iostream>

int main () {
    const int &ref = 100;  // OK: temporary extends lifetime
    std::cout << ref << std::endl;  // Prints 100

    return 0;
}