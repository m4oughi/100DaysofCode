#include <iostream>

class Array {
private:
    int* data;
    int size;
public:
    // Constructor with dynamic memory allocation
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i + 1;  // Initialize elements
        }
        std::cout << "Array created with size " << size << "." << std::endl;
    }

    // Copy constructor for deep copy
    Array(const Array& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        std::cout << "Array copied with deep copy." << std::endl;
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
    Array arr1(5);  // Allocates memory for array of size 5
    arr1.print();

    Array arr2 = arr1;  // Invokes the copy constructor for deep copy
    arr2.print();

    return 0;
}
