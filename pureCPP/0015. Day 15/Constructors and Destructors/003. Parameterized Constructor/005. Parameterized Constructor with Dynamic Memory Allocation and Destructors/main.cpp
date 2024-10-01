#include <iostream>

class Array {
private:
    int* arr;
    int size;
public:
    // Parameterized constructor with dynamic memory allocation
    Array(int s) : size(s) {
        arr = new int[size];
        std::cout << "Array of size " << size << " created." << std::endl;
    }

    // Destructor to deallocate memory
    ~Array() {
        delete[] arr;
        std::cout << "Array memory deallocated." << std::endl;
    }
};

int main() {
    Array arr(5);  // Array of size 5 is created
    return 0;
}
