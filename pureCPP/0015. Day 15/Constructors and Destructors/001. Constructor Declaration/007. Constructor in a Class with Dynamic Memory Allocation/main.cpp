#include <iostream>

class Array {
private:
    int* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new int[size];
        std::cout << "Array of size " << size << " created." << std::endl;
    }

    ~Array() {
        delete[] data;
        std::cout << "Array memory deallocated." << std::endl;
    }
};

int main() {
    Array arr(10);
    return 0;
}
