#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

consteval int compileTimeFactorial(int n) {
    return (n <= 1) ? 1 : n * compileTimeFactorial(n - 1);
}

int main() {
    constexpr int result1 = factorial(5); // ✅ Compile-time
    int x = 5;
    int result2 = factorial(x); // ✅ Runtime recursion

    // int error = compileTimeFactorial(x); ❌ ERROR: Must be compile-time!
}
