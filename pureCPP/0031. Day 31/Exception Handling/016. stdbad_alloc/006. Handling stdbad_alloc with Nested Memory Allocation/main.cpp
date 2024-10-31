#include <iostream>
#include <new>

void allocateLargeMemory() {
    int* data = new int[100000000000];  // Try to allocate a huge amount of memory
}

void processMemory() {
    allocateLargeMemory();
}

int main() {
    try {
        processMemory();
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed in nested function: " << e.what() << std::endl;
    }
    return 0;
}
