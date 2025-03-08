#include <iostream>
#include <deque>
#include <chrono>

template <typename T>
struct FastAllocator {
    using value_type = T;

    T* allocate(std::size_t n) {
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void deallocate(T* ptr, std::size_t n) {
        ::operator delete(ptr);
    }
};

int main() {
    const int N = 1000000;

    // Default allocator performance test
    auto start1 = std::chrono::high_resolution_clock::now();
    std::deque<int> dq1;
    for (int i = 0; i < N; ++i) dq1.push_back(i);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::cout << "Default allocator time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1).count() << "ms\n";

    // Custom allocator performance test
    auto start2 = std::chrono::high_resolution_clock::now();
    std::deque<int, FastAllocator<int>> dq2;
    for (int i = 0; i < N; ++i) dq2.push_back(i);
    auto end2 = std::chrono::high_resolution_clock::now();
    std::cout << "Custom allocator time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count() << "ms\n";

    return 0;
}
