#include <iostream>

class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overload the - operator for negation
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    void display() const {
        std::cout << "Complex(" << real << ", " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c(5, 3);
    Complex negC = -c;  // Calls overloaded - operator
    negC.display();  // Output: Complex(-5, -3i)
    return 0;
}
