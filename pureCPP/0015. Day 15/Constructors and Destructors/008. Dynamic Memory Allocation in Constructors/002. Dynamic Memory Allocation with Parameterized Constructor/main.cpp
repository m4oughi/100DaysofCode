#include <iostream>

class Array {
private:
    int* data;
    int size;
public:
    // Constructor with dynamic memory allocation and element initialization
    Array(int s, int value) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = value;
        }
        std::cout << "Array of size " << size << " initialized with value " << value << "." << std::endl;
    }

    ~Array() {
        delete[] data;
        std::cout << "Array memory deallocated." << std::endl;
    }
    
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array arr(5, 10);  // Allocates memory and initializes all elements to 10
    arr.print();
    return 0;
}
