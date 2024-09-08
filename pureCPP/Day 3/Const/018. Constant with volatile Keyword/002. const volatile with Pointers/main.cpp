#include <iostream>

int main() {
    const volatile int data = 20;
    const volatile int* ptr = &data;

    std::cout << *ptr << std::endl; // Prints 20
}
