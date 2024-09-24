#include <iostream>

// Inline functions to calculate the square of different types
inline int square(int x) {
    return x * x;
}

inline double square(double x) {
    return x * x;
}

int main() {
    std::cout << "Square of 5: " << square(5) << std::endl; // Output: Square of 5: 25
    std::cout << "Square of 5.5: " << square(5.5) << std::endl; // Output: Square of 5.5: 30.25
    return 0;
}
