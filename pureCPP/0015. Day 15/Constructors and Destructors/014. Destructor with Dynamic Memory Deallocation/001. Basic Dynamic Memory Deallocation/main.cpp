#include <iostream>

class SimpleArray {
private:
    int* data;
public:
    SimpleArray(int size) {
        data = new int[size];  // Dynamic memory allocation
        std::cout << "Array of size " << size << " allocated." << std::endl;
    }

    ~SimpleArray() {
        delete[] data;  // Deallocating memory
        std::cout << "Array deallocated." << std::endl;
    }
};

int main() {
    SimpleArray arr(5);  // Constructor allocates memory, destructor deallocates it
    return 0;
}
