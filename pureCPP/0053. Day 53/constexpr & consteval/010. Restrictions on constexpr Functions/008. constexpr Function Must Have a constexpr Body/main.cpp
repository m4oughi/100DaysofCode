#include <iostream>

constexpr int multiply(int a, int b);  // Declared but not defined

int main() {
    constexpr int result = multiply(3, 4);  // ❌ ERROR: No constexpr definition
    return 0;
}
