#include <iostream>
#include <utility>

template<typename T>
void process(T &&param) {
    using RefType = decltype(param);  // Determine the type of param

    if constexpr (std::is_lvalue_reference_v<RefType>) {
        std::cout << "L-value reference" << std::endl;
    } else {
        std::cout << "R-value reference" << std::endl;
    }
}

int main() {
    int value = 40;
    process(value);  // L-value reference case
    process(50);     // R-value reference case

    return 0;
}