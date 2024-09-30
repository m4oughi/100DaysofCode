#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        this->real += other.real;  // Modifying object using `this`
        this->imag += other.imag;
        return *this;  // Returning dereferenced `this`
    }

    void display() {
        cout << "Complex: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    c1 = c1 + c2;
    c1.display();
    return 0;
}
