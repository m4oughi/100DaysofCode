#include <iostream>
#include <deque>
#include <memory>

// Custom allocator tracking memory allocations
template <typename T>
struct CustomAllocator : std::allocator<T> {
    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements" << std::endl;
        return std::allocator<T>::allocate(n);
    }
    
    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " elements" << std::endl;
        std::allocator<T>::deallocate(p, n);
    }
};

int main() {
    std::deque<int, CustomAllocator<int>> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    
    return 0;
}
