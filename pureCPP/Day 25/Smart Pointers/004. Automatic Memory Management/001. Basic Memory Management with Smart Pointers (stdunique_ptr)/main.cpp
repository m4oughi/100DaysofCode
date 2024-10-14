#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10);  // Unique pointer owns the memory
    std::cout << "Value: " << *ptr << std::endl;  // Accessing the value

    // Memory is automatically deallocated when ptr goes out of scope
    return 0;
}
