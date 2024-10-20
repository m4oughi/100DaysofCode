#include <iostream>

int value = 100;  // Global variable

namespace {
    int value = 200;  // Unnamed namespace variable (file-local)
}

int main() {
    std::cout << "Global Value: " << ::value << std::endl;  // Accesses global scope
    std::cout << "Unnamed Namespace Value: " << value << std::endl;  // Accesses unnamed namespace
    return 0;
}
