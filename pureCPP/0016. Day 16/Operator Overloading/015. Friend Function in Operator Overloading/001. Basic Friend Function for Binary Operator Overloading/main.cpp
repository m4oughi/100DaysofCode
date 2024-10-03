#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Friend function for overloading +
    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Using overloaded +
    c3.display();  // Output: 4 + 6i
    return 0;
}
