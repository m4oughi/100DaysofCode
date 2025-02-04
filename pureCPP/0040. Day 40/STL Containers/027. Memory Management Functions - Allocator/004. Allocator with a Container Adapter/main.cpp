#include <iostream>
#include <deque>
#include <memory>  // For std::allocator

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
    std::deque<int, CustomAllocator<int>> myDeque;

    // Add elements to the deque
    myDeque.push_back(100);
    myDeque.push_back(200);
    myDeque.push_front(50);

    // Output the deque elements
    std::cout << "Deque elements: ";
    for (const auto& val : myDeque) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Clear the deque (triggering deallocation)
    myDeque.clear();

    return 0;
}
