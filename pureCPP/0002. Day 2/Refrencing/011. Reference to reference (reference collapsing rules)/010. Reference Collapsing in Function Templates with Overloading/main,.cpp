#include <iostream>
#include <type_traits>

template<typename T>
void process(T &&arg) {
    if constexpr (std::is_lvalue_reference_v<T>) {
        std::cout << "L-value reference" << std::endl;
    } else {
        std::cout << "R-value reference" << std::endl;
    }
}

void process(int &arg) {
    std::cout << "L-value reference overload" << std::endl;
}

void process(int &&arg) {
    std::cout << "R-value reference overload" << std::endl;
}

int main() {
    int x = 90;
    process(x);      // Calls L-value reference overload
    process(100);    // Calls R-value reference overload

    return 0;
}