#include <iostream>

class DynamicArray {
private:
    int* arr;
    int size;

public:
    // Constructor
    DynamicArray(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;
    }

    // Method to get the size
    int getSize() const {
        return size;
    }

    // Access operator
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    DynamicArray array(8);  // Create dynamic array of size 8

    std::cout << "Array size: " << array.getSize() << std::endl;  // Outputs: Array size: 8

    // Access and modify elements
    for (int i = 0; i < array.getSize(); ++i) {
        array[i] = i * 10;
        std::cout << array[i] << " ";  // Outputs: 0 10 20 30 40 50 60 70
    }
    std::cout << std::endl;
}
