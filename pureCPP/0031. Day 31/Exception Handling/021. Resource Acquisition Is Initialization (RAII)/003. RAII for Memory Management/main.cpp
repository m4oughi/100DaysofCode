#include <iostream>
#include <stdexcept>

class MemoryManager {
public:
    MemoryManager(size_t size) {
        data = new int[size];  // Allocating memory
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryManager() {
        delete[] data;  // Releasing memory
        std::cout << "Memory deallocated in destructor." << std::endl;
    }

private:
    int* data;
};

void riskyFunction() {
    MemoryManager manager(10);  // Memory is automatically managed
    throw std::runtime_error("An error occurred!");  // Even after exception, memory is cleaned
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
