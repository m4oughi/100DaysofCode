#include <iostream>

struct Matrix {
    int* data;
    size_t rows;
    size_t cols;

    // Constructor
    Matrix(size_t r, size_t c) : rows(r), cols(c) {
        data = new int[rows * cols];
    }

    // Copy constructor
    Matrix(const Matrix& m) : rows(m.rows), cols(m.cols), data(new int[rows * cols]) {
        std::copy(m.data, m.data + (rows * cols), data);
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }

    // Copy assignment operator
    Matrix& operator=(const Matrix& m) {
        if (this != &m) {
            delete[] data;
            rows = m.rows;
            cols = m.cols;
            data = new int[rows * cols];
            std::copy(m.data, m.data + (rows * cols), data);
        }
        return *this;
    }
};


int main() {


    return 0;
}