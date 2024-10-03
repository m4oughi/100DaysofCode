#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;

    int gcd(int a, int b) const {
        return b == 0 ? a : gcd(b, a % b);
    }

    void simplify() {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {
        simplify();
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(3, 4);
    Fraction f3 = f1 + f2;
    f3.display();  // Output: 5/4

    Fraction f4 = f1 * f2;
    f4.display();  // Output: 3/8

    return 0;
}
