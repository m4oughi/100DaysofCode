#include <iostream>
#include <new>  // For std::bad_alloc

void allocateMemory() {
    try {
        int* arr = new int[1000000000];
        std::cout << "Memory allocated successfully" << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed: " << e.what() << std::endl;
    }
}

int main() {
    allocateMemory();
    return 0;
}
