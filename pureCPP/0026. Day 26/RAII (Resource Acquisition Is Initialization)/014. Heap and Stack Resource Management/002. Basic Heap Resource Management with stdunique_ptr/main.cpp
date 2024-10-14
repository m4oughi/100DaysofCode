#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> ptr = std::make_unique<int>(42);
        std::cout << "Heap resource value: " << *ptr << std::endl;
        // Memory is automatically freed when `ptr` goes out of scope.
    }  // Memory deallocated here by `std::unique_ptr`.
    std::cout << "Heap resource has been released." << std::endl;
}
