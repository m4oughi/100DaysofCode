#include <iostream>

class Array {
private:
    int size;
    int* arr;

public:
    Array(int s) : size(s), arr(new int[s]) {}

    // Overload the [] operator for array indexing
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        throw std::out_of_range("Index out of bounds");
    }

    // Overload the [] operator for const access
    int operator[](int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        throw std::out_of_range("Index out of bounds");
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a(5);
    a[0] = 10;  // Uses overloaded [] operator
    std::cout << "a[0]: " << a[0] << std::endl;  // Uses overloaded [] operator for const access
    return 0;
}
