#include <iostream>

struct Matrix2x2 {
    int values[2][2];

    // Overloading the multiplication operator
    Matrix2x2 operator*(const Matrix2x2& other) const {
        Matrix2x2 result = {{{0, 0}, {0, 0}}};
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 2; ++k) {
                    result.values[i][j] += values[i][k] * other.values[k][j];
                }
            }
        }
        return result;
    }
};

int main() {


    return 0;
}