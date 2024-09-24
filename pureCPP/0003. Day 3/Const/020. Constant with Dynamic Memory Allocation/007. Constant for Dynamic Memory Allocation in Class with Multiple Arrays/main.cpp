#include <iostream>

class MultiArray {
public:
    static const int ROWS = 3;
    static const int COLS = 4;

    MultiArray() {
        matrix = new int*[ROWS];
        for (int i = 0; i < ROWS; ++i) {
            matrix[i] = new int[COLS];
        }
    }

    ~MultiArray() {
        for (int i = 0; i < ROWS; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    void fillMatrix() {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                matrix[i][j] = i * COLS + j;
            }
        }
    }

    void printMatrix() const {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int** matrix;
};

int main() {
    MultiArray obj;
    obj.fillMatrix();
    obj.printMatrix(); // Prints a 3x4 matrix with values
}
