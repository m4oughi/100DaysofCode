#include <iostream>
#include <utility>  // For std::move

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

    // Move constructor
    Array(Array&& other) noexcept : arr(other.arr), size(other.size) {
        other.arr = nullptr;
        other.size = 0;
        std::cout << "Array moved." << std::endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
        std::cout << "Array memory deallocated." << std::endl;
    }
};

int main() {
    Array arr1(5);
    Array arr2 = std::move(arr1);  // Move constructor is called
    return 0;
}
