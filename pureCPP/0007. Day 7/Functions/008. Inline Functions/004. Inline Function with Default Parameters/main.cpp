#include <iostream>

inline int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    std::cout << "5 squared: " << power(5) << std::endl;  // Uses default exponent (2)
    std::cout << "2 to the power of 3: " << power(2, 3) << std::endl;
    return 0;
}
