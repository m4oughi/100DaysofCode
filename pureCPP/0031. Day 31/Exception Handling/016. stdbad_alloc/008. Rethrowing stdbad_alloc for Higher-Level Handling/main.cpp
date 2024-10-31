#include <iostream>
#include <new>

void allocateResource() {
    try {
        int* data = new int[100000000000];  // Try to allocate large memory
    } catch (const std::bad_alloc& e) {
        std::cout << "Caught in allocateResource: " << e.what() << std::endl;
        throw;  // Rethrow to be caught at a higher level
    }
}

int main() {
    try {
        allocateResource();
    } catch (const std::bad_alloc& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
