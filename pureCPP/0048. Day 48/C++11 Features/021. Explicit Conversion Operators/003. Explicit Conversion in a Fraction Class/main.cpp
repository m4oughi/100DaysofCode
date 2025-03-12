#include <iostream>

class Fraction {
    int numerator, denominator;
public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    explicit operator double() const { // Explicit conversion to double
        return static_cast<double>(numerator) / denominator;
    }
};

int main() {
    Fraction f(3, 4);
    
    // double d = f; // Error: Implicit conversion is not allowed
    double d = static_cast<double>(f); // Works with explicit conversion

    std::cout << "Fraction as double: " << d << std::endl;
    return 0;
}
