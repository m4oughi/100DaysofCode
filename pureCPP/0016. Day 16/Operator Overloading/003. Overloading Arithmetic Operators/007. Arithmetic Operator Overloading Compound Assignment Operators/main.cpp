#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex& operator+=(const Complex& other) {
        real += other.real;
        imag += other.imag;
        return *this;
    }

    Complex& operator-=(const Complex& other) {
        real -= other.real;
        imag -= other.imag;
        return *this;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    c1 += c2;
    c1.display();  // Output: 4 + 6i

    c1 -= c2;
    c1.display();  // Output: 3 + 4i

    return 0;
}
