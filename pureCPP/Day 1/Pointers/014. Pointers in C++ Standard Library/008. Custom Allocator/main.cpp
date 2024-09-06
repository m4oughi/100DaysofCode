#include <iostream>
#include <memory>
#include <vector>

struct CustomAllocator {
    void* allocate(size_t size) {
        std::cout << "Allocating " << size << " bytes" << std::endl;
        return ::operator new(size);
    }

    void deallocate(void* ptr, size_t size) {
        std::cout << "Deallocating " << size << " bytes" << std::endl;
        ::operator delete(ptr);
    }
};

int main() {
    // Create a shared_ptr with a custom allocator and deleter
    std::shared_ptr<int> ptr(new int(42), [](int* p) {
        std::cout << "Custom deleter called" << std::endl;
        delete p;
    }, CustomAllocator());

    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 42

    // Memory is managed with a custom allocator and deleter
    return 0;
}
