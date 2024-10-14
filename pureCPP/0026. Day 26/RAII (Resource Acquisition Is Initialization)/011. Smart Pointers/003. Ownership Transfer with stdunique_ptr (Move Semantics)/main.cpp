#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> sourcePtr = std::make_unique<int>(123);
    std::unique_ptr<int> targetPtr = std::move(sourcePtr);  // Ownership transferred to `targetPtr`.
    
    if (!sourcePtr) {
        std::cout << "Source pointer is now null." << std::endl;
    }
    
    std::cout << "Target pointer value: " << *targetPtr << std::endl;
}  // Memory is deallocated when `targetPtr` goes out of scope.
