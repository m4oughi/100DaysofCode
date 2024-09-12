#include <iostream>

struct ArrayData {
    int* arr;
    int size;

    ArrayData(int s) : size(s) {
        arr = new int[s];  // Allocate memory for an array
        for (int i = 0; i < size; ++i) {
            arr[i] = i;  // Initialize array elements
        }
    }

    ~ArrayData() {
        delete[] arr;  // Free memory for the array
    }
};

int main() {
    ArrayData data(5);
    for (int i = 0; i < data.size; ++i) {
        std::cout << data.arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
