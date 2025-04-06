#include <iostream>

consteval int multiply(int a, int b) {
    return a * b;
}

constexpr int doubleMultiply(int x) {
    return multiply(x, x);  // ✅ Calls `consteval` function at compile-time
}

int main() {
    constexpr int result = doubleMultiply(5);  // ✅ OK
}
