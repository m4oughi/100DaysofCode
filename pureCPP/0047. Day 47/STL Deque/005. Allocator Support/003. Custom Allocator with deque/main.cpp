#include <iostream>
#include <deque>
#include <memory>

template <typename T>
struct CustomAllocator {
    using value_type = T;

    CustomAllocator() = default;

    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements\n";
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void deallocate(T* ptr, std::size_t n) {
        std::cout << "Deallocating " << n << " elements\n";
        ::operator delete(ptr);
    }
};

int main() {
    std::deque<int, CustomAllocator<int>> dq; // Using custom allocator

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    std::cout << "Deque elements: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
