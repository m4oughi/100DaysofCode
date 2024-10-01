#include <iostream>

class DynamicMemory {
private:
    int* data;
public:
    DynamicMemory(int size) {
        data = new int[size];  // Allocating memory
        std::cout << "Memory allocated for array of size " << size << "." << std::endl;
    }
    
    ~DynamicMemory() {
        delete[] data;  // Deallocating memory
        std::cout << "Memory deallocated." << std::endl;
    }
};

int main() {
    DynamicMemory obj(5);  // Memory will be allocated and deallocated
    return 0;
}
