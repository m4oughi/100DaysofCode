#include <iostream>

class MemoryRAII {
    int* data;

public:
    MemoryRAII(int size) : data(new int[size]) {
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryRAII() {
        delete[] data;
        std::cout << "Memory deallocated." << std::endl;
    }

    void setValue(int index, int value) {
        data[index] = value;
    }

    int getValue(int index) {
        return data[index];
    }
};

int main() {
    {
        MemoryRAII memory(5);
        memory.setValue(0, 42);
        std::cout << "Value at index 0: " << memory.getValue(0) << std::endl;
    }  // Memory is deallocated automatically when `memory` goes out of scope.
}
