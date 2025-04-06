#include <iostream>

consteval int square(int x) {
    return x * x;
}

int main() {
    int runtimeValue = 5;
    // int result = square(runtimeValue);  // ❌ Compilation error: requires constant expression

    constexpr int result = square(4);  // ✅ Works at compile-time
    std::cout << "Square: " << result << '\n';
}
