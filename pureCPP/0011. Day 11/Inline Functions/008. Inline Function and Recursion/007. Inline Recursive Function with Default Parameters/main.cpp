#include <iostream>

// Inline function with default parameters for calculating gcd
inline int gcd(int a, int b = 0) {
    if (b == 0) return a; // Base case
    return gcd(b, a % b); // Recursive call
}

int main() {
    std::cout << "GCD of 48 and 18: " << gcd(48, 18) << std::endl; // Output: 6
    return 0;
}
