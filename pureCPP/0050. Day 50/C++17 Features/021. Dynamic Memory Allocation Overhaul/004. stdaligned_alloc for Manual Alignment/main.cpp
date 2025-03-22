#include <iostream>
#include <cstdlib> // For aligned_alloc

int main() {
    void* ptr = std::aligned_alloc(64, 256); // 64-byte aligned, 256 bytes
    if (ptr) {
        std::cout << "Aligned allocation at: " << ptr << std::endl;
        std::free(ptr); // Must use free, not delete!
    }
    return 0;
}
