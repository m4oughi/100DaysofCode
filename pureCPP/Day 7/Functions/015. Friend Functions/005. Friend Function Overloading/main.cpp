#include <iostream>

class Complex {
private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloaded friend functions
    friend Complex add(const Complex& c1, const Complex& c2);
    friend Complex add(const Complex& c, double realValue);
};

// Friend function for adding two Complex numbers
Complex add(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// Overloaded friend function for adding real part to a Complex number
Complex add(const Complex& c, double realValue) {
    return Complex(c.real + realValue, c.imag);
}

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex sum1 = add(c1, c2);
    Complex sum2 = add(c1, 3.5);

    std::cout << "Sum1: (" << sum1.real << ", " << sum1.imag << ")" << std::endl;
    std::cout << "Sum2: (" << sum2.real << ", " << sum2.imag << ")" << std::endl;

    return 0;
}
