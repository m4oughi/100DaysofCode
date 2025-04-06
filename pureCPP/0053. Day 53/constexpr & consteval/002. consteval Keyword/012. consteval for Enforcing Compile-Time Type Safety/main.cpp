#include <iostream>

template <typename T>
consteval bool isIntegral() {
    return std::is_integral_v<T>;
}

int main() {
    static_assert(isIntegral<int>(), "Only integral types are allowed!"); // OK
    // static_assert(isIntegral<double>(), "Only integral types are allowed!"); // Error
    std::cout << "int is integral type!\n";
    return 0;
}
