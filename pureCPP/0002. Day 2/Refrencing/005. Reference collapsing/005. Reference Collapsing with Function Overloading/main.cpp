#include <iostream>

template<typename T>
void process(T&& param) {
    if constexpr (std::is_lvalue_reference_v<T>) {
        std::cout << "L-value reference" << std::endl;
    } else {
        std::cout << "R-value reference" << std::endl;
    }
}

int main() {
    int x = 80;
    process(x);     // L-value reference
    process(90);    // R-value reference

    return 0;
}