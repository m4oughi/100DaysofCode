#include <iostream>
#include <deque>
#include <memory>

template <typename T>
struct DebugAllocator {
    using value_type = T;

    DebugAllocator() = default;

    T* allocate(std::size_t n) {
        std::cout << "[DEBUG] Allocating " << n << " objects of size " << sizeof(T) << "\n";
        return std::allocator<T>().allocate(n);
    }

    void deallocate(T* ptr, std::size_t n) {
        std::cout << "[DEBUG] Deallocating " << n << " objects\n";
        std::allocator<T>().deallocate(ptr, n);
    }
};

int main() {
    std::deque<int, DebugAllocator<int>> dq;

    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);

    dq.pop_front();

    return 0;
}
