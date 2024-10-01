#include <iostream>

class Matrix {
private:
    int rows, cols;
    int** data;
public:
    // Constructor to allocate memory for a matrix
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
        std::cout << "Matrix of size " << rows << "x" << cols << " created." << std::endl;
    }

    // Destructor to deallocate memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        std::cout << "Matrix memory deallocated." << std::endl;
    }
};

int main() {
    Matrix mat(3, 3);  // Creates a 3x3 matrix
    return 0;
}
