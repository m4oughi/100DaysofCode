#include <iostream>

consteval int strict_compile_time(int x) {
    return x * x;
}

constexpr int flexible_compile_time(int x) {
    return x * x;
}

int main() {
    constexpr int a = strict_compile_time(5); // ✅ Always compile-time
    std::cout << "Strict compile-time: " << a << "\n";

    int b = 6;
    std::cout << "Flexible compile-time: " << flexible_compile_time(b) << "\n"; // ✅ Runtime OK

    // int c = strict_compile_time(b); ❌ ERROR: `b` is not constexpr
}
