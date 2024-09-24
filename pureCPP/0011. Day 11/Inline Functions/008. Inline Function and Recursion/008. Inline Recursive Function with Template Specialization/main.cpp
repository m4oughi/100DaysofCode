#include <iostream>

// Template inline function to calculate factorial
template <int N>
inline int factorial() {
    return N * factorial<N - 1>(); // Recursive call with template parameter
}

// Template specialization for base case
template <>
inline int factorial<1>() {
    return 1;
}

int main() {
    std::cout << "Factorial<5>: " << factorial<5>() << std::endl; // Output: 120
    return 0;
}
