#include <iostream>
#include <type_traits>

template <typename T>
void printType(T value) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Integer: " << value << '\n';
    } else if constexpr (std::is_floating_point_v<T>) {
        std::cout << "Floating Point: " << value << '\n';
    } else {
        static_assert(std::is_arithmetic_v<T>, "Unsupported type!");  // ❌ Compile error for non-arithmetic types
    }
}

int main() {
    printType(42);    // ✅ Integer: 42
    printType(3.14);  // ✅ Floating Point: 3.14
    // printType("Hello"); ❌ Compile error: Unsupported type!
}
