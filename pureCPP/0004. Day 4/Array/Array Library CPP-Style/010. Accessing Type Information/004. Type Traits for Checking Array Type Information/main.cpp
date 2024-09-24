#include <iostream>
#include <array>
#include <type_traits>

int main() {
    std::array<float, 4> arr;
    if (std::is_floating_point<std::array<float, 4>::value_type>::value) {
        std::cout << "Array elements are of floating-point type." << std::endl;
    } else {
        std::cout << "Array elements are not of floating-point type." << std::endl;
    }

    return 0;
}