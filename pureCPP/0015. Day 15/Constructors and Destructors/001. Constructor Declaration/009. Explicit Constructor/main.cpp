#include <iostream>

class Fraction {
private:
    int numerator, denominator;
public:
    explicit Fraction(int n) : numerator(n), denominator(1) {
        std::cout << "Fraction created with numerator " << numerator << std::endl;
    }
};

int main() {
    Fraction f1(5);  // Explicit constructor works here

    // Fraction f2 = 6; // Compilation error due to explicit constructor
    return 0;
}
