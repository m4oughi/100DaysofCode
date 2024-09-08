#include <iostream>

template <typename T>
constexpr T square(T x) {
    return x * x;
}

int main() {
    constexpr int intResult = square(5); // Compile-time evaluation for int
    constexpr double doubleResult = square(5.5); // Compile-time evaluation for double
    std::cout << intResult << " " << doubleResult << std::endl; // Prints 25 30.25
}
