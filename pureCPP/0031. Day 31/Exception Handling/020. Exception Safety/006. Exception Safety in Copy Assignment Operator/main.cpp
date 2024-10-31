#include <iostream>
#include <stdexcept>

class SafeArray {
public:
    SafeArray(int size) : size(size), arr(new int[size]) {}

    SafeArray(const SafeArray& other) : size(other.size), arr(new int[other.size]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    SafeArray& operator=(SafeArray other) {
        std::swap(arr, other.arr);
        std::swap(size, other.size);
        return *this;
    }

    ~SafeArray() {
        delete[] arr;
    }

private:
    int* arr;
    int size;
};

int main() {
    try {
        SafeArray arr1(5);
        SafeArray arr2(10);
        arr2 = arr1;  // Uses exception-safe assignment
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
