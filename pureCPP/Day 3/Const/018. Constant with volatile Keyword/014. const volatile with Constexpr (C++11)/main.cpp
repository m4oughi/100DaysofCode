#include <iostream>

constexpr const volatile int value = 800;

int main() {
    std::cout << value << std::endl; // Prints 800
}
