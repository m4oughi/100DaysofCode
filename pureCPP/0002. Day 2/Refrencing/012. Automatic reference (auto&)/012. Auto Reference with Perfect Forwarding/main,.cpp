#include <iostream>
#include <utility>

template<typename T>
void process(T&& arg) {
    auto& ref = std::forward<T>(arg);  // Forward the argument and deduce reference type

    std::cout << "Value: " << ref << std::endl;

    if constexpr (std::is_lvalue_reference_v<T>) {
        std::cout << "L-value reference" << std::endl;
    } else {
        std::cout << "R-value reference" << std::endl;
    }
}

int main() {
    int x = 130;
    process(x);      // L-value reference
    process(140);    // R-value reference
}
