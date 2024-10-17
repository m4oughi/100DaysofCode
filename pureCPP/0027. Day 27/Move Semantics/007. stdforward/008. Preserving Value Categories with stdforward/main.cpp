#include <iostream>
#include <utility>

template <typename T>
void processValue(T&& val) {
    if constexpr (std::is_lvalue_reference_v<T>) {
        std::cout << "Processing lvalue" << std::endl;
    } else {
        std::cout << "Processing rvalue" << std::endl;
    }
}

template <typename T>
void forwardValue(T&& val) {
    processValue(std::forward<T>(val));  // Retain value category (lvalue or rvalue)
}

int main() {
    int a = 10;
    forwardValue(a);           // Lvalue forwarded
    forwardValue(20);          // Rvalue forwarded
}
