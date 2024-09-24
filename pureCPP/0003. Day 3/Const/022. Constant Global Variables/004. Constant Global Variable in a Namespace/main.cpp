#include <iostream>

namespace MyNamespace {
    const int GLOBAL_CONSTANT = 400; // Constant global variable within namespace
}

int main() {
    std::cout << "Global constant in namespace: " << MyNamespace::GLOBAL_CONSTANT << std::endl; // Prints 400
}
