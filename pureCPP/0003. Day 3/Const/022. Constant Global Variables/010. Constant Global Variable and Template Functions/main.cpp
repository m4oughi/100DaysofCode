#include <iostream>

const int GLOBAL_CONSTANT = 1000; // Constant global variable

template <typename T>
void printGlobalConstant() {
    std::cout << "Global constant: " << GLOBAL_CONSTANT << std::endl;
}

int main() {
    printGlobalConstant<int>(); // Prints 1000
}
