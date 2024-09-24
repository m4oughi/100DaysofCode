#include <iostream>

class DynamicArray {
private:
    int* data;
    size_t size;

public:
    DynamicArray(size_t s) : size(s) {
        data = new int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = i;  // Initialize array
        }
    }

    ~DynamicArray() {
        delete[] data;
    }

    int& operator[](size_t index) {
        return data[index];  // Return by reference
    }

    const int& operator[](size_t index) const {
        return data[index];  // Return by const reference
    }
};

int main() {
    DynamicArray arr(5);
    arr[2] = 20;  // Modify array element through reference
    std::cout << "arr[2]: " << arr[2] << std::endl;  // Output: arr[2]: 20
    return 0;
}
