#include <iostream>

class MemoryRAII {
    int* data;

public:
    MemoryRAII(size_t size) : data(new int[size]) {
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryRAII() {
        delete[] data;
        std::cout << "Memory deallocated automatically." << std::endl;
    }

    void setValue(size_t index, int value) {
        data[index] = value;
    }

    int getValue(size_t index) const {
        return data[index];
    }
};

int main() {
    {
        MemoryRAII memory(5);
        memory.setValue(0, 42);
        std::cout << "Value at index 0: " << memory.getValue(0) << std::endl;
    }  // Memory is automatically deallocated when `MemoryRAII` goes out of scope.
}
