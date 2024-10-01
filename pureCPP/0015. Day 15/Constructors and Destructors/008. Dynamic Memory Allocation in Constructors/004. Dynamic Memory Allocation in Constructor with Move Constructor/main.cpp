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
            data[i] = i + 1;
        }
        std::cout << "Array created with size " << size << "." << std::endl;
    }

    // Move constructor for efficient resource transfer
    Array(Array&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;  // Set the source object to null
        other.size = 0;
        std::cout << "Array moved (no deep copy)." << std::endl;
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

    Array arr2 = std::move(arr1);  // Invokes the move constructor
    arr2.print();

    return 0;
}
