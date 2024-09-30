#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Friend function declaration
    friend Complex operator+(Complex, Complex);
};

// Friend function definition
Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2, 3), c2(3, 4);
    Complex c3 = c1 + c2;
    cout << "Sum: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}
