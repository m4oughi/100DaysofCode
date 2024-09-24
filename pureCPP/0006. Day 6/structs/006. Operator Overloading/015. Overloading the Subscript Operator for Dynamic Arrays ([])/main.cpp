#include <iostream>

struct DynamicArray {
    int* data;
    int size;

    // Constructor to allocate dynamic memory
    DynamicArray(int s) : size(s) {
        data = new int[size];
    }

    // Destructor to deallocate memory
    ~DynamicArray() {
        delete[] data;
    }

    // Overloading the subscript operator
    int& operator[](int index) {
        return data[index];
    }

    const int& operator[](int index) const {
        return data[index];
    }
};

int main() {


    return 0;
}