#include <iostream>
#include <memory>
#include <cstdlib>  // For malloc/free

void customFreeDeleter(void* ptr) {
    std::cout << "Custom deleter for free() called" << std::endl;
    free(ptr);  // Custom deleter uses free() instead of delete
}

int main() {
    std::shared_ptr<void> ptr(malloc(100), customFreeDeleter);  // Allocate memory with malloc

    if (ptr) {
        std::cout << "Memory allocated using malloc" << std::endl;
    }

    // Memory will be deallocated using free() when ptr goes out of scope
    return 0;
}
