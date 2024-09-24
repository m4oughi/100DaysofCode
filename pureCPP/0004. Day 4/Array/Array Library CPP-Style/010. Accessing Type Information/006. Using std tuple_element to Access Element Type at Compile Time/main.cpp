#include <iostream>
#include <array>
#include <type_traits>

int main() {
    std::array<int, 5> arr;
    using FirstElementType = std::tuple_element<0, decltype(arr)>::type;  // int

    if (std::is_same<FirstElementType, int>::value) {
        std::cout << "The type of the first element is int." << std::endl;
    }


    return 0;
}