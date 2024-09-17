#include <iostream>

class Matrix {
public:
    int a, b, c, d;

    Matrix(int a, int b, int c, int d) : a(a), b(b), c(c), d(d) {}

    // Overload the * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        return Matrix(
            a * other.a + b * other.c,  // Calculating first element of result
            a * other.b + b * other.d,  // Calculating second element of result
            c * other.a + d * other.c,  // Calculating third element of result
            c * other.b + d * other.d   // Calculating fourth element of result
        );
    }

    void display() const {
        std::cout << "[" << a << " " << b << "]\n[" << c << " " << d << "]" << std::endl;
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(2, 0, 1, 2);
    Matrix m3 = m1 * m2;  // Calls overloaded * operator
    m3.display();
    return 0;
}
