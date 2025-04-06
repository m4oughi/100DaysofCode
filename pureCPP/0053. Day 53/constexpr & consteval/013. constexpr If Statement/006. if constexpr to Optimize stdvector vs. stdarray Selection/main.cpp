#include <iostream>
#include <vector>
#include <array>

template <typename T, std::size_t N>
auto createContainer() {
    if constexpr (N <= 10) {
        return std::array<T, N>{};  // ✅ Compile-time fixed array
    } else {
        return std::vector<T>(N);   // ✅ Dynamically allocated vector
    }
}

int main() {
    auto smallContainer = createContainer<int, 5>();  // ✅ std::array<int, 5>
    auto largeContainer = createContainer<int, 50>(); // ✅ std::vector<int>
}
