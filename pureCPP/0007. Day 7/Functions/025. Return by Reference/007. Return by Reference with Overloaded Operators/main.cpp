#include <iostream>

class Matrix {
private:
    int values[2][2];

public:
    Matrix(int a, int b, int c, int d) {
        values[0][0] = a;
        values[0][1] = b;
        values[1][0] = c;
        values[1][1] = d;
    }

    int& operator()(int row, int col) {
        return values[row][col];  // Return by reference
    }

    const int& operator()(int row, int col) const {
        return values[row][col];  // Return by const reference
    }
};

int main() {
    Matrix mat(1, 2, 3, 4);
    mat(0, 1) = 10;  // Modify matrix element through reference
    std::cout << "mat(0, 1): " << mat(0, 1) << std::endl;  // Output: mat(0, 1): 10
    return 0;
}
