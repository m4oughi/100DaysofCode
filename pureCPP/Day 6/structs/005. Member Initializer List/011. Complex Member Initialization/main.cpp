#include <iostream>

struct ComplexNumber {
    double real;
    double imag;

    // Member initializer list with a complex expression
    ComplexNumber(double r, double i) : real(r), imag(i) {}
};

struct ComplexPair {
    ComplexNumber first;
    ComplexNumber second;

    // Member initializer list for initializing complex members
    ComplexPair(double r1, double i1, double r2, double i2)
        : first(r1, i1), second(r2, i2) {}
};

int main() {


    return 0;
}