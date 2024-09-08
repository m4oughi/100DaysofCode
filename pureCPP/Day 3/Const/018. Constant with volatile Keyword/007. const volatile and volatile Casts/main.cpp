#include <iostream>

int main() {
    const volatile int data = 200;
    // const volatile int* ptr = const_cast<const volatile int*>(&data); // Unsafe

    std::cout << data << std::endl; // Prints 200
}
