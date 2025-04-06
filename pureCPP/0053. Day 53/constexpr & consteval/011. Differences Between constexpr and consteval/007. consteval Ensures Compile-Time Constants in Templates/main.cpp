#include <iostream>

template<int N>
consteval int square() {
    return N * N;
}

int main() {
    constexpr int result = square<5>();  // ✅ OK: Compile-time only
    // int n;
    // std::cin >> n;
    // int error = square<n>(); ❌ ERROR: Runtime value not allowed.
}
