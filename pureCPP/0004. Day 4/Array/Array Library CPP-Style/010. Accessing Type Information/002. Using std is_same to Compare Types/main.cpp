#include <iostream>
#include <array>
#include <type_traits>

int main() {
    std::array<double, 10> arr;
    if (std::is_same<std::array<double, 10>::value_type, double>::value) {
        std::cout << "Array elements are of type double." << std::endl;
    } else {
        std::cout << "Array elements are of a different type." << std::endl;
    }

    return 0;
}