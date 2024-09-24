#include <iostream>

// Inline function for calculating power using recursion
inline int power(int base, int exp) {
    if (exp == 0) return 1; // Base case
    return base * power(base, exp - 1); // Recursive call
}

int main() {
    std::cout << "3^10: " << power(3, 10) << std::endl; // Output: 59049
    // 10^10 would likely lead to stack overflow
    // std::cout << "3^20: " << power(3, 20) << std::endl; // Uncommenting may cause stack overflow
    return 0;
}
