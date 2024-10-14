#include <iostream>
#include <memory>

void simpleMemoryManagement() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10); // Allocates memory for an int
    std::cout << "Value: " << *ptr << std::endl;
    // Memory is automatically deallocated when ptr goes out of scope
}

int main() {
    simpleMemoryManagement();
    std::cout << "Memory automatically deallocated using RAII." << std::endl;
    return 0;
}
