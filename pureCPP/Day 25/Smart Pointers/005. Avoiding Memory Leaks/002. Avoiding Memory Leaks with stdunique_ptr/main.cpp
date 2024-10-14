#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(20);  // Unique pointer handles memory
    std::cout << "Value: " << *ptr << std::endl;

    // Memory is automatically deallocated when ptr goes out of scope
    return 0;
}
