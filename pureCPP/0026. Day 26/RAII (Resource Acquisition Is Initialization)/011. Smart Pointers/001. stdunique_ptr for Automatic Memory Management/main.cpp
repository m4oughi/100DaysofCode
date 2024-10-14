#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> uniquePtr = std::make_unique<int>(42);
        std::cout << "Unique pointer value: " << *uniquePtr << std::endl;
    }  // Memory is automatically deallocated when `uniquePtr` goes out of scope.
}
