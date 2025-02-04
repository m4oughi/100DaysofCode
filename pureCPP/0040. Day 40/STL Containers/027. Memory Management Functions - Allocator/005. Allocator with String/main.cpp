#include <iostream>
#include <string>
#include <memory>

template <typename T>
struct CustomAllocator : public std::allocator<T> {
    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements\n";
        return std::allocator<T>::allocate(n);
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " elements\n";
        std::allocator<T>::deallocate(p, n);
    }
};

int main() {
    std::string str("Hello, World!", CustomAllocator<char>());

    // Output the string
    std::cout << "String: " << str << std::endl;

    // The memory management happens automatically when the string goes out of scope
    return 0;
}
