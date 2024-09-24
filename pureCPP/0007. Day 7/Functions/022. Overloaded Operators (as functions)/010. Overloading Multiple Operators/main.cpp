#include <iostream>

class Fraction {
public:
    int numerator, denominator;

    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    // Overload the + operator
    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    // Overload the * operator
    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    
    Fraction sum = f1 + f2;  // Calls overloaded + operator
    Fraction product = f1 * f2;  // Calls overloaded * operator

    std::cout << "Sum: " << sum << std::endl;  // Calls overloaded << operator
    std::cout << "Product: " << product << std::endl;  // Calls overloaded << operator
    
    return 0;
}
