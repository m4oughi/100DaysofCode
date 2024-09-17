#include <iostream>

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}

    // Friend function declaration for overloading +
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);

    void print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

// Friend function for overloading the + operator
Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int denom = f1.denominator * f2.denominator;
    return Fraction(num, denom);
}

int main() {
    Fraction f1(1, 2), f2(3, 4);
    Fraction result = f1 + f2;  // Uses friend function for operator overloading

    result.print();  // Prints 10/8

    return 0;
}
