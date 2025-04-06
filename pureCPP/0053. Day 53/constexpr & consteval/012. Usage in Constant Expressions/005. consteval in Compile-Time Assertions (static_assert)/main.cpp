#include <iostream>

consteval int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    static_assert(max(10, 5) == 10, "Max function failed!");  // ✅ Compile-time check
}
