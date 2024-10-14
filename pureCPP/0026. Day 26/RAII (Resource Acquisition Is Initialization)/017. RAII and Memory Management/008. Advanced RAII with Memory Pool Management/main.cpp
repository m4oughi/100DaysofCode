#include <iostream>

class MemoryPool {
    char* pool;
    size_t poolSize;

public:
    MemoryPool(size_t size) : poolSize(size) {
        pool = new char[size];
        std::cout << "Memory pool created." << std::endl;
    }

    ~MemoryPool() {
        delete[] pool;
        std::cout << "Memory pool destroyed." << std::endl;
    }

    void* allocate(size_t size) {
        // For simplicity, just return the start of the pool
        std::cout << "Allocating " << size << " bytes from memory pool." << std::endl;
        return static_cast<void*>(pool);
    }
};

void memoryPoolExample() {
    MemoryPool pool(1024); // Create a memory pool of 1KB
    void* memBlock = pool.allocate(128); // Allocate 128 bytes from the pool
    // Memory pool is automatically destroyed when it goes out of scope
}

int main() {
    memoryPoolExample();
    std::cout << "Memory pool automatically managed with RAII." << std::endl;
    return 0;
}
