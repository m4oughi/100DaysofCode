#include <iostream>
#include <vector>
#include <memory>
#include <cstdlib>

// Custom allocator for memory pool
template <typename T>
class MemoryPoolAllocator : public std::allocator<T> {
public:
    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements from memory pool\n";
        void* ptr = std::malloc(n * sizeof(T));
        if (!ptr) {
            throw std::bad_alloc();
        }
        return static_cast<T*>(ptr);
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " elements from memory pool\n";
        std::free(p);
    }
};

int main() {
    // Use custom memory pool allocator for a vector
    std::vector<int, MemoryPoolAllocator<int>> poolVector;

    // Add elements
    for (int i = 1; i <= 5; ++i) {
        poolVector.push_back(i);
    }

    // Output the vector elements
    std::cout << "Vector elements in memory pool: ";
    for (int val : poolVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
