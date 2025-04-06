#include <iostream>

template <typename T>
constexpr int process(T value) {
    if constexpr (std::is_integral_v<T>) {
        return value * 2;  // ✅ Executed only for integral types
    } else {
        return -1;  // ✅ Executed only for non-integral types
    }
}

int main() {
    std::cout << process(10) << '\n';   // ✅ 20 (int)
    std::cout << process(3.5) << '\n';  // ✅ -1 (double)
}
