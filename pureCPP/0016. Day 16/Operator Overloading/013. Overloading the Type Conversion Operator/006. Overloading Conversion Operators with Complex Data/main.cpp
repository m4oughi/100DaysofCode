#include <iostream>
using namespace std;

class ComplexNumber {
    double real, imag;
public:
    ComplexNumber(double r, double i) : real(r), imag(i) {}

    // Conversion operator to convert ComplexNumber to double (magnitude)
    operator double() const {
        return sqrt(real * real + imag * imag);
    }

    void display() const {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    ComplexNumber c(3.0, 4.0);
    c.display();
    double magnitude = c;  // Implicit conversion to double (magnitude)
    cout << "Magnitude: " << magnitude << endl;  // Output: 5
    return 0;
}
