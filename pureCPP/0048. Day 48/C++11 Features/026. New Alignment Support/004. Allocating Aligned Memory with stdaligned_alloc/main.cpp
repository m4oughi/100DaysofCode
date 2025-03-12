#include <iostream>
#include <cstdlib> // for std::aligned_alloc

int main() {
    constexpr size_t alignment = 32;
    constexpr size_t size = 128;

    void* ptr = std::aligned_alloc(alignment, size);
    if (ptr) {
        std::cout << "Allocated " << size << " bytes with " << alignment << "-byte alignment.\n";
        std::free(ptr);
    } else {
        std::cerr << "Aligned allocation failed.\n";
    }
    return 0;
}
