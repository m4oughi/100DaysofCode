#include <iostream>

consteval int getCompileTimeValue() {
    return 42;
}

int main() {
    constexpr int result = getCompileTimeValue();  // ✅ OK
    // int runtimeResult = getCompileTimeValue(); ❌ ERROR: Runtime evaluation not allowed.
}
