#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the << operator for output
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {
    Complex c1(3, 4);
    cout << "Complex number: " << c1 << endl;  // Output: Complex number: 3 + 4i
    return 0;
}
