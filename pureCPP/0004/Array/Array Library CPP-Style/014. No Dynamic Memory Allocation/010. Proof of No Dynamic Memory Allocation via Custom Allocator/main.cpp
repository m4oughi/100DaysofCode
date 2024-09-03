#include <iostream>
#include <array>
#include <new>  // For std::nothrow

void* operator new(std::size_t sz) {
    std::cout << "Global new called with size: " << sz << std::endl;
    return std::malloc(sz);
}

void operator delete(void* ptr) noexcept {
    std::free(ptr);
}


int main() {
    std::array<int, 5> arr;  // Should not trigger global new or delete

    std::cout << "Array initialized." << std::endl;

    return 0;
}