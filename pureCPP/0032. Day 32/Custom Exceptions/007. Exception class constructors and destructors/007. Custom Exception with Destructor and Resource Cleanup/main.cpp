#include <iostream>
#include <exception>

class MemoryException : public std::exception {
private:
    int* data;
public:
    MemoryException() {
        data = new int[100];  // Simulate resource allocation
        std::cout << "MemoryException constructor: Allocating memory." << std::endl;
    }

    ~MemoryException() {
        delete[] data;  // Free allocated memory
        std::cout << "MemoryException destructor: Releasing memory." << std::endl;
    }

    const char* what() const noexcept override {
        return "Memory allocation error!";
    }
};

int main() {
    try {
        throw MemoryException();
    } catch (const MemoryException& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
