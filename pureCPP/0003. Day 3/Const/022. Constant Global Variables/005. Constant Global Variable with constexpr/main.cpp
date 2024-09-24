#include <iostream>

constexpr int GLOBAL_CONSTANT = 500; // Compile-time constant global variable

int main() {
    std::cout << "Global constant (constexpr): " << GLOBAL_CONSTANT << std::endl; // Prints 500
}
