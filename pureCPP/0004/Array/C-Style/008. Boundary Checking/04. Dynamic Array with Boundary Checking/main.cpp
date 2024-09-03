#include <iostream>

class SafeArray {
private:
    int* arr;
    int size;

public:
    SafeArray(int s) : size(s) {
        arr = new int[size];
    }

    ~SafeArray() {
        delete[] arr;
    }

    void set(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            std::cerr << "Error: Index " << index << " is out of bounds!" << std::endl;
        }
    }

    int get(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cerr << "Error: Index " << index << " is out of bounds!" << std::endl;
            return -1;  // Return an error value
        }
    }
};

int main() {
    SafeArray array(5);

    // Set values safely
    array.set(0, 10);
    array.set(4, 50);

    // Attempt to access out of bounds
    array.set(7, 70);  // Outputs an error message

    // Safe access
    std::cout << array.get(0) << std::endl;  // Outputs: 10

    // Attempt to access out of bounds
    std::cout << array.get(5) << std::endl;  // Outputs an error message
}
