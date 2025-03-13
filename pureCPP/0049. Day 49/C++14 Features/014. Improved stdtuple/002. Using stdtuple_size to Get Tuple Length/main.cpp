#include <iostream>
#include <tuple>
#include <type_traits>

int main() {
    using MyTuple = std::tuple<int, double, std::string>;

    std::cout << "Tuple size: " << std::tuple_size<MyTuple>::value << "\n";

    return 0;
}
