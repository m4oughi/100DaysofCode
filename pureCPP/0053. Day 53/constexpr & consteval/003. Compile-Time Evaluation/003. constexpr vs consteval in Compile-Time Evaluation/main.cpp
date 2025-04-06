#include <iostream>

constexpr int add(int a, int b) {
    return a + b; // Can be evaluated at compile-time or runtime
}

consteval int multiply(int a, int b) {
    return a * b; // Must be evaluated at compile-time
}

int main() {
    constexpr int a = add(3, 4); // OK, evaluated at compile-time
    int b = add(3, 4); // OK, evaluated at runtime

    constexpr int c = multiply(3, 4); // OK
    // int d = multiply(3, 4); // ERROR: `consteval` function cannot be called at runtime

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << '\n';
    return 0;
}
