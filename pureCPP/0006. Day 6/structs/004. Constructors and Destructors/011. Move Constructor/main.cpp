#include <iostream>

struct Buffer {
    int* data;
    size_t size;

    // Constructor
    Buffer(size_t s) : size(s) {
        data = new int[size];
    }

    // Move constructor
    Buffer(Buffer&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    // Destructor
    ~Buffer() {
        delete[] data;
    }
};


int main() {


    return 0;
}