#include <iostream>

class MyArray {
public:
    int* data;
    int size;
    
    MyArray(int s) : size(s) {
        data = new int[s];
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }
    
    MyArray(const MyArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }
    
    ~MyArray() {
        delete[] data;
    }
};

void modifyArray(MyArray arr) {
    arr.data[0] = 100;  // Modifies only the copy
}

int main() {
    MyArray arr(5);
    modifyArray(arr);
    std::cout << "Original array first element: " << arr.data[0] << std::endl;  // No change to original data
    return 0;
}
