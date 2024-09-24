#include <iostream>

// Inline function for calculating binomial coefficient C(n, k)
inline int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) return 1; // Base case
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k); // Recursive call
}

int main() {
    std::cout << "Binomial Coefficient C(5, 2): " << binomialCoefficient(5, 2) << std::endl; // Output: 10
    return 0;
}
