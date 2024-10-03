#include <iostream>
using namespace std;

class Matrix {
    int data;
public:
    Matrix(int d) : data(d) {}

    friend Matrix operator*(const Matrix& m1, const Matrix& m2);

    void display() const {
        cout << data << endl;
    }
};

Matrix operator*(const Matrix& m1, const Matrix& m2) {
    return Matrix(m1.data * m2.data);
}

int main() {
    Matrix m1(3), m2(4);
    Matrix m3 = m1 * m2;
    m3.display();  // Output: 12
    return 0;
}
