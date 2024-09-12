#include <iostream>
#include <memory>

int main() {
    alignas(16) char buffer[32];
    void* ptr = buffer;
    std::size_t space = sizeof(buffer);

    void* aligned_ptr = std::align(16, 4, ptr, space);
    if (aligned_ptr) {
        std::cout << "Buffer successfully aligned to 16 bytes." << std::endl;
    } else {
        std::cout << "Buffer alignment failed." << std::endl;
    }
}
