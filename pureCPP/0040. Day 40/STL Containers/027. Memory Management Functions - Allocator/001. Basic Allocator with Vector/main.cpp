#include <iostream>
#include <vector>
#include <memory>  // For std::allocator

int main() {
    std::allocator<int> alloc;
    int* p = alloc.allocate(5);  // Allocate space for 5 integers

    // Initialize memory manually (equivalent to push_back)
    for (int i = 0; i < 5; ++i) {
        alloc.construct(p + i, i + 1);
    }

    // Output the values
    std::cout << "Vector elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(p + i) << " ";
    }
    std::cout << std::endl;

    // Deallocate memory
    for (int i = 0; i < 5; ++i) {
        alloc.destroy(p + i);
    }
    alloc.deallocate(p, 5);

    return 0;
}
