#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    // Explicit constructor for a single real number
    explicit Complex(double r) : real(r), imag(0) {
        std::cout << "Complex number with real part only: " << real << " + " << imag << "i" << std::endl;
    }

    // Non-explicit constructor for real and imaginary parts
    Complex(double r, double i) : real(r), imag(i) {
        std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
    }
    
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(4.5);  // Explicit constructor must be called explicitly
    c1.display();

    Complex c2(3.0, 4.5);  // Non-explicit constructor allows both real and imaginary parts
    c2.display();

    // Complex c3 = 7.5;  // Error: Implicit conversion disallowed by explicit constructor
    return 0;
}
