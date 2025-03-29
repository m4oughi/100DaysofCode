#include <iostream>
#include <concepts>

// Concept combining integral and floating-point numbers
template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

// Function accepting Numeric types
template <Numeric T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    std::cout << multiply(4, 5) << '\n';   // ✅ Works
    std::cout << multiply(3.5, 2.0) << '\n'; // ✅ Works
}
