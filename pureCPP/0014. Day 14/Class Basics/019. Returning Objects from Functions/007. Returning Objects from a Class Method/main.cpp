#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex add(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);  // Returning a new object
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(5, 7);

    Complex sum = c1.add(c2);  // Storing the returned object
    sum.display();

    return 0;
}
