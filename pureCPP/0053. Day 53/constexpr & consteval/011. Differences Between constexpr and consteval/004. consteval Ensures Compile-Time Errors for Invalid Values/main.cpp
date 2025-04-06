#include <iostream>

consteval int safeDivide(int a, int b) {
    if (b == 0)
        throw "Division by zero!"; // ❌ ERROR: No exceptions allowed in `consteval`
    return a / b;
}

int main() {
    constexpr int result = safeDivide(10, 2); // ✅ OK at compile-time
    // constexpr int error = safeDivide(10, 0); ❌ ERROR: Caught at compile-time
}
