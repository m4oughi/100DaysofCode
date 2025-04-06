#include <iostream>

constexpr int constexprFunction(int x) { 
    return x * 2;  // ✅ Can be evaluated at compile-time or runtime
}

consteval int constevalFunction(int x) { 
    return x * 2;  // 🔥 Must be evaluated at compile-time
}

int main() {
    constexpr int a = constexprFunction(5); // ✅ Compile-time evaluation
    int x = 10;
    int b = constexprFunction(x); // ✅ Runtime evaluation allowed

    // int c = constevalFunction(x); ❌ ERROR: `x` is a runtime value!
    constexpr int d = constevalFunction(10); // ✅ Compile-time only
}
