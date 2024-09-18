#include <iostream>
using namespace std;

class Complex {
    int real, imag;
    
public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;   // Uses overloaded + operator
    
    cout << "Sum of complex numbers: ";
    c3.display();
    
    return 0;
}
