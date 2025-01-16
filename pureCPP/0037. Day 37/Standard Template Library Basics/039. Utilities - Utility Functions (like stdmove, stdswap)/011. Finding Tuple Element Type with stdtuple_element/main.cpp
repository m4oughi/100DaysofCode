#include <iostream>
#include <tuple>
#include <type_traits>

int main() {
    std::tuple<int, double, std::string> t(10, 3.14, "Alice");

    using ElementType = std::tuple_element<1, decltype(t)>::type;

    if (std::is_same<ElementType, double>::value) {
        std::cout << "The second element is of type double.\n";
    }

    return 0;
}
