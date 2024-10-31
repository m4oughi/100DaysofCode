#include <iostream>
#include <new>  // For std::bad_alloc

int main() {
    try {
        int* p = new int[1000000000000];  // Try to allocate a large array
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed: " << e.what() << std::endl;
    }
    return 0;
}
