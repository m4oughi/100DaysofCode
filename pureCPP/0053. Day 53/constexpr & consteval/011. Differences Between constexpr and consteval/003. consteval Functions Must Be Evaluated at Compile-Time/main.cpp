#include <iostream>

consteval int doubleValue(int x) {
    return x * 2;
}

int main() {
    constexpr int result1 = doubleValue(10); // ✅ Compile-time evaluation
    int n;
    std::cin >> n;
    // int result2 = doubleValue(n); ❌ ERROR: Cannot call `consteval` function at runtime.
}
