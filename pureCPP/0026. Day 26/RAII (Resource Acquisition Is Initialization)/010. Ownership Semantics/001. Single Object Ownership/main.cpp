#include <iostream>

class MemoryOwner {
    int* data;

public:
    MemoryOwner() : data(new int[10]) {
        std::cout << "Memory allocated." << std::endl;
    }

    ~MemoryOwner() {
        delete[] data;
        std::cout << "Memory deallocated automatically." << std::endl;
    }
};

int main() {
    {
        MemoryOwner owner;
        // Memory is owned by the `owner` object.
    }  // Memory is automatically released when `owner` goes out of scope.
}
