#include <iostream>

class Matrix {
private:
    int** data;
    int rows, cols;
public:
    // Constructor with dynamic memory allocation for 2D array
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = (i + 1) * (j + 1);
            }
        }
        std::cout << "Matrix created with " << rows << " rows and " << cols << " columns." << std::endl;
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
        std::cout << "Matrix memory deallocated." << std::endl;
    }

    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix mat(3, 3);  // Allocates memory for a 3x3 matrix
    mat.print();
    return 0;
}
