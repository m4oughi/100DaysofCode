#include <iostream>

class Array {
private:
    int* data;
    int size;
public:
    // Constructor with dynamic memory allocation
    Array(int s) : size(s) {
        data = new int[size];
        std::cout << "Array of size " << size << " dynamically allocated." << std::endl;
    }

    ~Array() {
        delete[] data;
        std::cout << "Array memory deallocated." << std::endl;
    }
};

int main() {
    Array arr(5);  // Allocates memory for an array of size 5
    return 0;
}
