#include <iostream>
#include <new>

void* operator new(std::size_t size) {
    std::cout << "[DEBUG] Allocating " << size << " bytes\n";
    return std::malloc(size);
}

void operator delete(void* ptr) noexcept {
    std::cout << "[DEBUG] Freeing memory\n";
    std::free(ptr);
}

int main() {
    int* arr = new int[5]; // Triggers custom operator new
    delete[] arr;
    return 0;
}
