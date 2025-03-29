#include <iostream>

consteval int compile_time_only(int x) {
    return x * x;
}

constexpr int compile_or_runtime(int x) {
    return x * x;
}

int main() {
    constexpr int a = compile_time_only(4);  // ✅ Must be compile-time
    std::cout << "Compile-time only: " << a << "\n";

    int b = 5;
    std::cout << "Compile-time or runtime: " << compile_or_runtime(b) << "\n"; // ✅ Allowed

    // int c = compile_time_only(b); ❌ ERROR: Not a constant at compile-time
}
