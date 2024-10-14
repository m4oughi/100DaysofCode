#include <iostream>
#include <memory>

void sharedMemoryManagement() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(42); // Shared ownership
    {
        std::shared_ptr<int> ptr2 = ptr1; // Share ownership with ptr1
        std::cout << "Value: " << *ptr2 << std::endl;
        std::cout << "Reference count: " << ptr2.use_count() << std::endl;
        // ptr2 goes out of scope, but memory is not released because ptr1 still holds ownership
    }
    std::cout << "Reference count after ptr2 is destroyed: " << ptr1.use_count() << std::endl;
    // Memory is automatically deallocated when ptr1 goes out of scope
}

int main() {
    sharedMemoryManagement();
    std::cout << "Shared memory management handled with RAII." << std::endl;
    return 0;
}
