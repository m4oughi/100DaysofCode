#include <iostream>
#include <stdexcept>

class MemoryHandler {
public:
    MemoryHandler(size_t size) : data(new int[size]) {
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryHandler() {
        delete[] data;  // Memory is automatically freed here
        std::cout << "Memory deallocated in destructor." << std::endl;
    }

private:
    int* data;
};

void riskyFunction() {
    MemoryHandler handler(10);  // Memory is managed by RAII

    throw std::runtime_error("Error occurred!");  // Memory is still freed on exception
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
