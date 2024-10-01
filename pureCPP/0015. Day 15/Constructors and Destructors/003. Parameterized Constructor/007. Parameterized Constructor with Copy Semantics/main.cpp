#include <iostream>

class Array {
private:
    int* arr;
    int size;
public:
    // Parameterized constructor
    Array(int s) : size(s) {
        arr = new int[size];
        std::cout << "Array of size " << size << " created." << std::endl;
    }

    // Copy constructor
    Array(const Array& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
        std::cout << "Array copied." << std::endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
        std::cout << "Array memory deallocated." << std::endl;
    }
};

int main() {
    Array arr1(5);
    Array arr2 = arr1;  // Copy constructor is called
    return 0;
}
