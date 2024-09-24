#include <iostream>

template <typename T>
static inline T multiply(T a, T b) {
    return a * b;
}

int main() {
    std::cout << "Product of 3 and 4: " << multiply(3, 4) << std::endl; // Output: 12
    std::cout << "Product of 2.5 and 1.5: " << multiply(2.5, 1.5) << std::endl; // Output: 3.75
    return 0;
}
