#include <iostream>

int main() {
    const volatile int value = 100;
    const volatile int& ref = value;

    std::cout << ref << std::endl; // Prints 100
}
