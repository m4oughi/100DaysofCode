#include <iostream>
using namespace std;

class Matrix {
    int value;
public:
    Matrix(int v) : value(v) {}

    Matrix operator*(const Matrix& other) {
        return Matrix(value * other.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Matrix m1(3), m2(4);
    Matrix m3 = m1 * m2;
    m3.display();  // Output: 12
    return 0;
}
