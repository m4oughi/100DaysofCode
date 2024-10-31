#include <iostream>
#include <new>

void* customAllocator(size_t size) {
    void* ptr = malloc(size);
    if (ptr == nullptr) {
        throw std::bad_alloc();
    }
    return ptr;
}

int main() {
    try {
        void* memory = customAllocator(100000000000);  // Try allocating a large block
        std::cout << "Custom allocation succeeded" << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cout << "Custom allocator failed: " << e.what() << std::endl;
    }
    return 0;
}
