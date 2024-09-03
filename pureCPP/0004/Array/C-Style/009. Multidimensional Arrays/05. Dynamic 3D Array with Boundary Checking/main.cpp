#include <iostream>

class Safe3DArray {
private:
    int*** array;
    int x, y, z;

public:
    Safe3DArray(int xDim, int yDim, int zDim) : x(xDim), y(yDim), z(zDim) {
        array = new int**[x];
        for (int i = 0; i < x; ++i) {
            array[i] = new int*[y];
            for (int j = 0; j < y; ++j) {
                array[i][j] = new int[z];
            }
        }
    }

    ~Safe3DArray() {
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                delete[] array[i][j];
            }
            delete[] array[i];
        }
        delete[] array;
    }

    void set(int i, int j, int k, int value) {
        if (i >= 0 && i < x && j >= 0 && j < y && k >= 0 && k < z) {
            array[i][j][k] = value;
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
        }
    }

    int get(int i, int j, int k) const {
        if (i >= 0 && i < x && j >= 0 && j < y && k >= 0 && k < z) {
            return array[i][j][k];
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
            return -1;  // Error value
        }
    }
};

int main() {
    Safe3DArray array(2, 2, 2);

    // Set values with boundary checking
    array.set(0, 0, 0, 1);
    array.set(1, 1, 1, 8);

    // Attempt to set a value out of bounds
    array.set(2, 2, 2, 5);  // Outputs an error message

    // Get values
    std::cout << array.get(0, 0, 0) << std::endl;  // Outputs: 1
    std::cout << array.get(1, 1, 1) << std::endl;  // Outputs: 8

    // Attempt to get a value out of bounds
    std::cout << array.get(2, 2, 2) << std::endl;  // Outputs an error message
}
