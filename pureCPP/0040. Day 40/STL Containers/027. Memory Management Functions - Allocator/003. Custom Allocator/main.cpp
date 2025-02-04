#include <iostream>
#include <memory>
#include <vector>

// Custom allocator that logs allocation/deallocation
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
    // Create a vector with the custom allocator
    std::vector<int, CustomAllocator<int>> myVector;

    // Use the vector with the custom allocator
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Output the elements
    std::cout << "Vector elements: ";
    for (const auto& val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
