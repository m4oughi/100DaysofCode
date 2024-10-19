#include <iostream>

class DynamicArray {
    int* data;
public:
    DynamicArray(int size) {
        data = new int[size];  // Allocate dynamic memory
        std::cout << "Dynamic memory allocated!" << std::endl;
    }
    ~DynamicArray() {
        delete[] data;  // Release dynamic memory
        std::cout << "Dynamic memory released!" << std::endl;
    }
};

int main() {
    DynamicArray arr(10);  // Destructor will clean up the memory
    return 0;
}
