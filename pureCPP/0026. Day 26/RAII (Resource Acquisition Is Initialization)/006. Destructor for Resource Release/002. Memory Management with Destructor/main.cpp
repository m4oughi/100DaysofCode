#include <iostream>

class MemoryRAII {
    int* data;

public:
    MemoryRAII(int size) : data(new int[size]) {
        std::cout << "Memory allocated." << std::endl;
    }

    // Destructor releases the memory automatically.
    ~MemoryRAII() {
        delete[] data;
        std::cout << "Memory deallocated in destructor." << std::endl;
    }

    void setValue(int index, int value) {
        data[index] = value;
    }

    int getValue(int index) const {
        return data[index];
    }
};

int main() {
    {
        MemoryRAII memory(5);
        memory.setValue(0, 42);
        std::cout << "Value at index 0: " << memory.getValue(0) << std::endl;
    }  // Memory is deallocated automatically by the destructor.
}
