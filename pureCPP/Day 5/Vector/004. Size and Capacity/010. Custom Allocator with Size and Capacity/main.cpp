#include <iostream>
#include <vector>
#include <memory>

template <typename T>
struct CustomAllocator : public std::allocator<T> {
    template <typename U>
    struct rebind {
        typedef CustomAllocator<U> other;
    };

    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements." << std::endl;
        return std::allocator<T>::allocate(n);
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " elements." << std::endl;
        std::allocator<T>::deallocate(p, n);
    }
};

int main() {
    std::vector<int, CustomAllocator<int>> numbers;

    numbers.reserve(5);  // Pre-allocate memory using custom allocator
    std::cout << "Capacity after reserve: " << numbers.capacity() << std::endl;

    for (int i = 0; i < 5; ++i) {
        numbers.push_back(i);
    }

    numbers.push_back(6);  // This will trigger reallocation
    std::cout << "Capacity after adding more elements: " << numbers.capacity() << std::endl;

    return 0;
}
