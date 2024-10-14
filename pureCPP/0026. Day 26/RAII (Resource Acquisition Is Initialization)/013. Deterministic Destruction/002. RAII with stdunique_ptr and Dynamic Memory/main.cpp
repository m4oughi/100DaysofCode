#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> ptr = std::make_unique<int>(10);
        std::cout << "Value: " << *ptr << std::endl;
        // Memory is automatically freed when `ptr` goes out of scope.
    }  // Memory is deterministically freed here
    std::cout << "Pointer memory has been released." << std::endl;
}
