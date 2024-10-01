#include <iostream>

class Matrix {
private:
    int** data;
    int rows, cols;
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];  // Allocating memory for columns
        }
        std::cout << "2D array (Matrix) allocated." << std::endl;
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];  // Deallocating each row
        }
        delete[] data;  // Deallocating the array of row pointers
        std::cout << "2D array (Matrix) deallocated." << std::endl;
    }
};

int main() {
    Matrix matrix(3, 3);  // Constructor and destructor manage a dynamic 2D array
    return 0;
}
