#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;
    int size;
public:
    // Constructor with dynamic memory allocation and exception handling
    Array(int s) : size(s) {
        try {
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = i + 1;
            }
            std::cout << "Array of size " << size << " created." << std::endl;
        } catch (std::bad_alloc& e) {
            std::cerr << "Memory allocation failed: " << e.what() << std::endl;
            throw;  // Rethrow the exception after logging
        }
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
    try {
        Array arr(5);  // Allocates memory for array of size 5
        arr.print();
    } catch (...) {
        std::cerr << "An error occurred while creating the array." << std::endl;
    }
    return 0;
}
