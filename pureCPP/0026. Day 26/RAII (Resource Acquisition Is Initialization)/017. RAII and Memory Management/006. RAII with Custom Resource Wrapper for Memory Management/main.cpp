#include <iostream>

class MemoryWrapper {
    int* data;
public:
    MemoryWrapper(size_t size) {
        data = new int[size];
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryWrapper() {
        delete[] data;
        std::cout << "Memory deallocated." << std::endl;
    }

    int& operator[](size_t index) {
        return data[index];
    }
};

void customWrapperExample() {
    MemoryWrapper memory(5); // Allocates memory for an array of 5 ints
    for (size_t i = 0; i < 5; ++i) {
        memory[i] = i * 20;
    }

    for (size_t i = 0; i < 5; ++i) {
        std::cout << "Memory element " << i << ": " << memory[i] << std::endl;
    }
    // Memory is automatically deallocated when the MemoryWrapper object goes out of scope
}

int main() {
    customWrapperExample();
    std::cout << "Custom memory wrapper managed memory using RAII." << std::endl;
    return 0;
}
