#include <iostream>

struct Ratio {
    int numerator;
    int denominator;
    double value;

    // Member initializer list with dependent initialization
    Ratio(int num, int denom) 
        : numerator(num), denominator(denom), value(static_cast<double>(num) / denom) {}
};

int main() {


    return 0;
}