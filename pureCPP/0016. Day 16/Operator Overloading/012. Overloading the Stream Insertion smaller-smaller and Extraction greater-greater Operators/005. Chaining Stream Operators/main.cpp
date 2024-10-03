#include <iostream>
using namespace std;

class Complex {
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload stream extraction operator
    friend istream& operator>>(istream& is, Complex& c) {
        is >> c.real >> c.imag;
        return is;
    }

    // Overload stream insertion operator
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {
    Complex c1, c2;
    cout << "Enter two complex numbers: ";
    cin >> c1 >> c2;
    cout << "You entered: " << c1 << " and " << c2 << endl;
    return 0;
}
