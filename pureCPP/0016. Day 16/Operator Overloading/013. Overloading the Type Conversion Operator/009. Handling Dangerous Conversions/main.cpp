#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;
public:
    Fraction(int n, int d) : numerator(n), denominator(d) {}

    // Dangerous implicit conversion to double
    operator double() const {
        if (denominator == 0)
            throw runtime_error("Division by zero!");
        return static_cast<double>(numerator) / denominator;
    }
};

int main() {
    try {
        Fraction frac(3, 0);  // Dangerous division by zero
        double value = frac;  // Implicit conversion to double
        cout << "Value: " << value << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;  // Handle division by zero
    }
    return 0;
}
