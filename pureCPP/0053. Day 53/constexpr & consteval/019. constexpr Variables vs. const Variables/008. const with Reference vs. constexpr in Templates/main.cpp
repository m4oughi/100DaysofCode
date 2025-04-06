#include <iostream>

template <typename T>
constexpr T multiplyByTwo(T val) {
    return val * 2;  // Compile-time evaluation
}

template <typename T>
void printConstReference(const T& val) {
    std::cout << "const reference value: " << val << '\n';  // Access via reference
}

int main() {
    constexpr int x = 5;
    constexpr int result = multiplyByTwo(x);  // Computed at compile-time
    printConstReference(result);  // Passed as const reference
}
