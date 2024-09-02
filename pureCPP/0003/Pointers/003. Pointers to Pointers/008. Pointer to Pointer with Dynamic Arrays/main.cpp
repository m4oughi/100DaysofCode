#include <iostream>

int main() {
    int rows = 2;
    int cols = 3;

    // Allocating memory for a dynamic 2D array
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Populating the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    // Deleting the dynamic array
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

}