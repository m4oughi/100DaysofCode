#include <iostream>
#include <utility>

template<typename T>
void forwardValue(T &&value) {
    using RefType = decltype(std::forward<T>(value));  // Deduce the type after forwarding

    if constexpr (std::is_lvalue_reference_v<RefType>) {
        std::cout << "L-value reference" << std::endl;
    } else {
        std::cout << "R-value reference" << std::endl;
    }
}

int main() {
    int x = 50;
    forwardValue(x);     // L-value reference
    forwardValue(60);    // R-value reference reference type

    return 0;
}