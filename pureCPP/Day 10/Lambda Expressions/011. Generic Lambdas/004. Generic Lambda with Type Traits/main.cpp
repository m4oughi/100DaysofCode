#include <iostream>
#include <type_traits>

int main() {
    auto isIntegral = [](auto x) {
        return std::is_integral<decltype(x)>::value;
    };

    std::cout << std::boolalpha;
    std::cout << isIntegral(42) << std::endl;         // Outputs: true
    std::cout << isIntegral(3.14) << std::endl;       // Outputs: false
    std::cout << isIntegral('c') << std::endl;        // Outputs: true
    return 0;
}
