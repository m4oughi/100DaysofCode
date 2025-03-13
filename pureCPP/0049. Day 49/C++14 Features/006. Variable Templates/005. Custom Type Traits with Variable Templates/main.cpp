#include <iostream>
#include <type_traits>

template<typename T>
constexpr bool is_integral_v = std::is_integral<T>::value;

template<typename T>
constexpr bool is_floating_point_v = std::is_floating_point<T>::value;

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is int integral? " << is_integral_v<int> << std::endl; // true
    std::cout << "Is double integral? " << is_integral_v<double> << std::endl; // false
    std::cout << "Is float a floating point? " << is_floating_point_v<float> << std::endl; // true

    return 0;
}
