#include <iostream>
#include <vector>
#include <cstddef>

class MemoryPool {
    std::vector<std::byte> pool;

public:
    MemoryPool(size_t size) : pool(size) {}

    void* allocate(size_t bytes) {
        return static_cast<void*>(pool.data());
    }
};

int main() {
    MemoryPool memPool(1024);
    void* ptr = memPool.allocate(128);

    std::cout << "Memory allocated using std::byte!\n";
    return 0;
}
