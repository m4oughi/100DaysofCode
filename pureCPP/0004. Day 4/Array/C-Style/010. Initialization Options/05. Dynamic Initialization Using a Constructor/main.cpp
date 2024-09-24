#include <iostream>

class DynamicArray {
private:
    int* arr;
    int size;

public:
    // Constructor with dynamic initialization
    DynamicArray(int s, int initValue = 0) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = initValue;
        }
    }

    // Destructor to free allocated memory
    ~DynamicArray() {
        delete[] arr;
    }

    // Print array elements
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray array(5, 10);  // Initialize with size 5 and all elements set to 10

    array.print();  // Outputs: 10 10 10 10 10
}
