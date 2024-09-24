#include <iostream>
#include <type_traits>

int main() {
    auto printType = [](auto x) {
        if constexpr (std::is_integral_v<decltype(x)>) {
            std::cout << "Integer: " << x << std::endl;
        } else {
            std::cout << "Not an integer: " << x << std::endl;
        }
    };

    printType(10);    // Outputs: Integer: 10
    printType(5.5);   // Outputs: Not an integer: 5.5
    return 0;
}
