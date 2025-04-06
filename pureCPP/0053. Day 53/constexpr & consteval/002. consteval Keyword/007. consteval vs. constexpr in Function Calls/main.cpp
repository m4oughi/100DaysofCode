#include <iostream>

constexpr int constexprFunction(int n) {
    return n * 2; // Can be evaluated at compile-time or runtime
}

consteval int constevalFunction(int n) {
    return n * 2; // Must be evaluated at compile-time
}

int main() {
    constexpr int a = constexprFunction(5); // OK
    int b = constexprFunction(5); // OK, evaluated at runtime

    constexpr int c = constevalFunction(5); // OK
    // int d = constevalFunction(5); // Error: consteval function must be evaluated at compile-time

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << '\n';
    return 0;
}
