#include <iostream>
#include <tuple>
#include <type_traits>

int main() {
    using MyTuple = std::tuple<int, double, std::string>;

    using ElementType = std::tuple_element<1, MyTuple>::type; // Get type of element at index 1

    if constexpr (std::is_same_v<ElementType, double>) {
        std::cout << "Element at index 1 is a double!\n";
    }

    return 0;
}
