#include <iostream>

template<typename T>
void universal(T&& param) {
    // T&& collapses based on the argument type
    if constexpr (std::is_lvalue_reference<T>::value) {
        std::cout << "Bound to an L-value" << std::endl;
    } else {
        std::cout << "Bound to an R-value" << std::endl;
    }
}

int main() {
    int a = 100;
    universal(a);       // L-value reference, T is int&, param collapses to int&
    universal(200);     // R-value reference, T is int, param remains int&&

    return 0;
}