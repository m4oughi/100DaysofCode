#include <iostream>

// Inline template function to return the absolute value
template <typename T>
inline T absolute(T x) {
    return (x < 0) ? -x : x;
}

int main() {
    std::cout << "Absolute of -5: " << absolute(-5) << std::endl; // Output: Absolute of -5: 5
    std::cout << "Absolute of -5.5: " << absolute(-5.5) << std::endl; // Output: Absolute of -5.5: 5.5
    return 0;
}
