#include <iostream>

class SimpleArray {
private:
    int* data;
    int size;
public:
    // Parameterized constructor
    SimpleArray(int s) : size(s) {
        data = new int[size];
        std::cout << "SimpleArray of size " << size << " created." << std::endl;
    }

    // Move constructor
    SimpleArray(SimpleArray&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;  // Nullify the old object's data
        other.size = 0;
        std::cout << "SimpleArray moved." << std::endl;
    }

    // Destructor
    ~SimpleArray() {
        delete[] data;
        std::cout << "SimpleArray memory deallocated." << std::endl;
    }
};

int main() {
    SimpleArray arr1(5);
    SimpleArray arr2 = std::move(arr1);  // Move constructor is called
    return 0;
}
