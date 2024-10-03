#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    bool operator>=(const Complex& other) const {
        return (real * real + imag * imag) >= (other.real * other.real + other.imag * other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    cout << (c1 >= c2) << endl;  // Output: 1 (true)
    return 0;
}
