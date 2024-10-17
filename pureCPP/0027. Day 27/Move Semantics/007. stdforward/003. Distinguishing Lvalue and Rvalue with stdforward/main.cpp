#include <iostream>
#include <utility>

template <typename T>
void process(T&& arg) {
    if constexpr (std::is_lvalue_reference_v<T>) {
        std::cout << "Lvalue reference" << std::endl;
    } else {
        std::cout << "Rvalue reference" << std::endl;
    }
}

template <typename T>
void forwarder(T&& val) {
    process(std::forward<T>(val));  // Forward the argument as-is
}

int main() {
    int x = 10;
    forwarder(x);              // Lvalue reference
    forwarder(20);             // Rvalue reference
}
