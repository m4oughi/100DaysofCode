#include <iostream>
#include <type_traits>

template <typename T>
void process(T value) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Processing integer: " << value << '\n';
    } else if constexpr (std::is_floating_point_v<T>) {
        std::cout << "Processing floating-point: " << value << '\n';
    } else {
        std::cout << "Processing unknown type\n";
    }
}

int main() {
    process(10);     // ✅ Processing integer: 10
    process(5.5);    // ✅ Processing floating-point: 5.5
}
