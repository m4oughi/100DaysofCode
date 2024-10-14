#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(10); // Creating unique_ptr
    std::cout << "Value: " << *ptr1 << std::endl;          // Accessing the value
    return 0;
}
