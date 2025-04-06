#include <iostream>
#include <type_traits>

template <typename T>
constexpr bool isIntegral() {
    return std::is_integral_v<T>;
}

int main() {
    static_assert(isIntegral<int>(), "int is an integral type!");
    static_assert(!isIntegral<double>(), "double is not an integral type!");
    
    std::cout << "Compile-time type check passed!\n";
    return 0;
}
