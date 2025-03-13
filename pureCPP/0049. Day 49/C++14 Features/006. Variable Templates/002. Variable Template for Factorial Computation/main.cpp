#include <iostream>

template<int N>
constexpr int factorial = N * factorial<N - 1>;

template<>
constexpr int factorial<0> = 1;

int main() {
    std::cout << "Factorial of 5: " << factorial<5> << std::endl; // Output: 120
    std::cout << "Factorial of 7: " << factorial<7> << std::endl; // Output: 5040

    return 0;
}
