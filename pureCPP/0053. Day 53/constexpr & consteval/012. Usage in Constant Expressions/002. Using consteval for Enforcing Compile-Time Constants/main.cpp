#include <iostream>

consteval int doubleValue(int x) {
    return x * 2;
}

int main() {
    constexpr int result = doubleValue(5);  // ✅ OK (compile-time)
    // int x = 10;
    // int result2 = doubleValue(x); ❌ ERROR: `x` is not a constant.
}
