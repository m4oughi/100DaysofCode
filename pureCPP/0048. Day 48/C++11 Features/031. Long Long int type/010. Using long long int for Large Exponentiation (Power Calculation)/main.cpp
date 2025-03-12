#include <iostream>

long long int power(long long int base, int exp) {
    long long int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    long long int base = 5;
    int exponent = 15;
    std::cout << base << "^" << exponent << " = " << power(base, exponent) << std::endl;
    return 0;
}
