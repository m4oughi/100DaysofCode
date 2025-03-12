#include <iostream>
#include <tuple>
#include <type_traits>

int main() {
    using TupleType = std::tuple<int, double, std::string>;

    std::cout << "Tuple Size: " << std::tuple_size<TupleType>::value << std::endl;

    using ElementType = std::tuple_element<1, TupleType>::type;
    std::cout << "Second Element Type: " << typeid(ElementType).name() << std::endl;

    return 0;
}
