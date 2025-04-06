#include <iostream>

constexpr int constexprFunction(int x) {
    return x * 3; // Can be evaluated at runtime or compile-time
}

consteval int constevalFunction(int x) {
    return x * 3; // Must be evaluated at compile-time
}

int main() {
    constexpr int a = constexprFunction(5); // OK
    int b = 5;
    int c = constexprFunction(b); // OK (evaluated at runtime)

    // int d = constevalFunction(b); // ❌ Compile error: Immediate function requires compile-time constant

    std::cout << "a: " << a << ", c: " << c << '\n';
    return 0;
}
