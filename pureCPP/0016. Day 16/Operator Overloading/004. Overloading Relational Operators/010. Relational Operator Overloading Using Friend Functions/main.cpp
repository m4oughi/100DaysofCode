#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;
public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    friend bool operator<(const Fraction& f1, const Fraction& f2) {
        return (f1.numerator * f2.denominator) < (f2.numerator * f1.denominator);
    }

    friend bool operator>(const Fraction& f1, const Fraction& f2) {
        return (f1.numerator * f2.denominator) > (f2.numerator * f1.denominator);
    }

    friend bool operator==(const Fraction& f1, const Fraction& f2) {
        return (f1.numerator * f2.denominator) == (f2.numerator * f1.denominator);
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(2, 3);
    
    cout << (f1 < f2) << endl;  // Output: 1 (true)
    cout << (f1 > f2) << endl;  // Output: 0 (false)
    cout << (f1 == f2) << endl; // Output: 0 (false)

    return 0;
}
