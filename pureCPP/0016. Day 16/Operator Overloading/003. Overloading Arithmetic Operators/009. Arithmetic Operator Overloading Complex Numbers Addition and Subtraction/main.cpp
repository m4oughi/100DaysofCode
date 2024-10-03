#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(2, 3);
    Complex c3 = c1 + c2;
    c3.display();  // Output: 6 + 8i

    Complex c4 = c1 - c2;
    c4.display();  // Output: 2 + 2i

    return 0;
}
