#include <iostream>
#include <vector>
#include <memory>

template<typename T>
struct CustomAllocator : public std::allocator<T> {
    template<typename U>
    struct rebind { using other = CustomAllocator<U>; };

    T* allocate(size_t n) {
        std::cout << "Allocating " << n << " elements." << std::endl;
        return std::allocator<T>::allocate(n);
    }

    void deallocate(T* p, size_t n) {
        std::cout << "Deallocating " << n << " elements." << std::endl;
        std::allocator<T>::deallocate(p, n);
    }
};

int main() {
    std::vector<int, CustomAllocator<int>> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    return 0;
}
