#include <iostream>
#include <stdexcept>

class MemoryRAII {
    int* data;

public:
    MemoryRAII(size_t size) : data(new int[size]) {
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryRAII() {
        delete[] data;
        std::cout << "Memory deallocated." << std::endl;
    }

    void simulateException() {
        throw std::runtime_error("Simulated exception during memory usage.");
    }
};

int main() {
    try {
        MemoryRAII memory(10);
        memory.simulateException();  // Exception is thrown here.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Memory is deallocated even though an exception was thrown.
}
