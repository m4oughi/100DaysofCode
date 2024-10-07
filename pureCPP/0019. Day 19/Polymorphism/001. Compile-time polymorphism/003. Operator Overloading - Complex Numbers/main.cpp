#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator + (const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 5.6), c2(1.2, 3.8);
    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}
